#!/bin/bash

# do-test.sh
# Copyright (C) 2017 Félix Cloutier.
# All Rights Reserved.
#
# This file is part of fcd.
# 
# fcd is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# 
# fcd is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with fcd.  If not, see <http:#www.gnu.org/licenses/>.
#

export BASEDIR
export FCD="$1"
export COMMIT_HASH="$2"
BASEDIR=$(dirname "$0")

# Do SSH configuration
(
	ENCRYPTED_KEY_VAR="encrypted_${TRAVIS_ENCRYPTION_LABEL}_key"
	ENCRYPTED_KEY_IV="encrypted_${TRAVIS_ENCRYPTION_LABEL}_iv"
	umask 0377
	openssl aes-256-cbc -K "${!ENCRYPTED_KEY_VAR}" -iv "${!ENCRYPTED_KEY_IV}" \
		-in "${BASEDIR}/deploy_key.enc" -out "${BASEDIR}/deploy_key" -d
)

mkdir -p 
echo "Host github.com" > 

# Download dependencies and prepare header paths.
APPLE_OPENSOURCE_LIBS=(Libc)
UBUNTU_PACKAGES=(glibc/libc6-dev_2.24-8_amd64.deb)

# The Ubuntu include path is essentially static since everything goes to
# /usr/include.
UBUNTU_INCLUDE_PATH=(-I "${BASEDIR}/include/ubuntu/usr/include")
UBUNTU_INCLUDE_PATH+=(-I "${UBUNTU_INCLUDE_PATH[1]}/x86_64-linux-gnu")

# The Apple include path has more variety.
APPLE_INCLUDE_PATH=()

mkdir -p "${BASEDIR}/include/apple"
for LIB in "${APPLE_OPENSOURCE_LIBS[@]}"; do
	LATEST=$(curl -s "https://opensource.apple.com/tarballs/${LIB}/" \
		| grep -oh "${LIB}"'-[0-9.]*\.tar\.gz' \
		| sort -sn -t- -k2 \
		| tail -n 1)
	URL="https://opensource.apple.com/tarballs/${LIB}/${LATEST}"
	echo "Downloading ${URL}"
	curl -s "${URL}" -o "${LIB}.tar.gz"
	tar -xf "${LIB}.tar.gz" -C "${BASEDIR}/include/apple"
	APPLE_INCLUDE_PATH+=(-I "${BASEDIR}/include/apple/${LIB}/include")
done

mkdir -p "${BASEDIR}/include/ubuntu"
for LIB in "${UBUNTU_PACKAGES[@]}"; do
	URL="http://ftp.us.debian.org/debian/pool/main/${LIB:0:1}/${LIB}"
	ARCHIVE="$(basename "${LIB}")"
	echo "Downloading ${URL}"
	curl -s "${URL}" -o "${ARCHIVE}"
	
	# We can't use dpkg on macOS.
	DATA_FILE="$(ar -t ${ARCHIVE} | tail -n 1)"
	ar -x "${ARCHIVE}" "${DATA_FILE}"
	tar -xf "${DATA_FILE}" -C "${BASEDIR}/include/ubuntu"
	rm "${DATA_FILE}"
done

function fcd {
	local -r PROGRAM="$1"
	local -r PROGRAM_BASE_NAME=$(basename $PROGRAM)
	local -r OUTPUT_PATH="${BASEDIR}/output/${PROGRAM_BASE_NAME}.c"
	local -r ERROR_PATH="${BASEDIR}/error/${PROGRAM_BASE_NAME}.log"
	rm -f "${OUTPUT_PATH}" "${ERROR_PATH}"
	shift
	
	TIMEFORMAT=%R
	TIME=$(ulimit -SHt 30; {
		time "${FCD}" -I . -I "${BASEDIR}/include" "$@" "${PROGRAM}" \
			> "${OUTPUT_PATH}" \
			2> "${ERROR_PATH}";
	} 2>&1)
	echo '"'"${PROGRAM_BASE_NAME}"'",'"$?,${TIME}" >> "${BASEDIR}/time.csv"
}

# Run tests.
echo "Program,Exit Status,Time" > "${BASEDIR}/time.csv"
mkdir -p "${BASEDIR}/output" "${BASEDIR}/error"
for HEADER in "${BASEDIR}"/bin/*.h; do
	PROGRAM=$(basename "${HEADER}" .h)
	IFS="" read -r FIRST_LINE < "${HEADER}"
	# Assumed to be #include "linux.h" or #include "osx.h".
	case "${FIRST_LINE:10:${#FIRST_LINE}-13}" in
		linux)
			fcd "${PROGRAM}" --header "${HEADER}" "${UBUNTU_INCLUDE_PATH[@]}" ;;
		osx)
			fcd "${PROGRAM}" --header "${HEADER}" "${APPLE_INCLUDE_PATH[@]}" \
				--format="${BASEDIR}/../scripts/macho.py" ;;
		*)
			fcd "${PROGRAM}" --header "${HEADER}" ;;
	esac
done

# Commit and publish results.
git -C "${BASEDIR}" remote set-url origin "git@github.com:$(git remote get-url origin | grep -oh '[^/]*/[^/]*$')"
git -C "${BASEDIR}" config user.name "Travis CI"
git -C "${BASEDIR}" config user.email "travis@zneak.github.io"
git -C "${BASEDIR}" add .
git -C "${BASEDIR}" commit -m "Test results on ${TRAVIS_OS_NAME} for fcd commit ${COMMIT_HASH}"
GIT_SSH="${BASEDIR}/ssh-unattend.sh" git -C "${BASEDIR}" push origin "${TRAVIS_OS_NAME}"

