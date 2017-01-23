#!/bin/bash

# test.sh
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

set -e

export BASEDIR
export FCD="$1"
export COMMIT_HASH="$2"
BASEDIR=$(dirname "$0")

# Set up SSH key for deploying. Do this first so that we stop immediately if
# there's a problem.
ENCRYPTED_KEY_VAR="encrypted_${1}_key"
ENCRYPTED_KEY_IV="encrypted_${1}_iv"
(umask 0377; \
	openssl aes-256-cbc -K "${!ENCRYPTED_KEY_VAR}" -iv "${!ENCRYPTED_KEY_IV}" \
		-in deploy_key.enc -out deploy_key -d)
eval "$(ssh-agent -s)"
ssh-add deploy_key

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
	curl -s "${ULR}" | tar -zxvf -C "${BASEDIR}/include/apple"
	APPLE_INCLUDE_PATH+=(-I "${BASEDIR}/include/apple/${LIB}/include")
done

mkdir -p "${BASEDIR}/include/ubuntu"
for LIB in "${UBUNTU_PACKAGES[@]}"; do
	URL="http://ftp.us.debian.org/debian/pool/main/${LIB:0:1}/${LIB}"
	echo "Downloading ${URL}"
	curl -s "${URL}" | tar -zxvf -C "${BASEDIR}/include/ubuntu"
done

function test-fcd {
	local PROGRAM="$0"
	local OUTPUT_PATH="${BASEDIR}/output/${PROGRAM}.c"
	local ERROR_PATH="${BASEDIR}/error/${PROGRAM}.txt"
	rm -f "${OUTPUT_PATH}" "${ERROR_PATH}"
	shift
	
	TIMEFORMAT=%R
	TIME=$(ulimit -SHt 30; time {
		"${FCD}" -I "${BASEDIR}/include" "$@" "${PROGRAM}" \
			> "${OUTPUT_PATH}" \
			2> "${ERROR_PATH}";
	} 2>&1)
	echo '"'"${PROGRAM}"'",'"$TIME" >> "${BASEDIR}/time.csv"
}

# Run tests.
echo "Program,Time" > "${BASEDIR}/time.csv"
mkdir -p "${BASEDIR}/output"
for HEADER in "${BASEDIR}"/bin/*.h; do
	PROGRAM="${HEADER:0:-2}"
	IFS="" read -r firstLine < "${HEADER}"
	# Assumed to be #include "linux.h" or #include "osx.h".
	case "${firstLine:10:-1}" in
		linux)
			test-fcd "${PROGRAM}" --header "${HEADER}" "${UBUNTU_INCLUDE_PATH[@]}" ;;
		osx)
			test-fcd "${PROGRAM}" --header "${HEADER}" "${APPLE_INCLUDE_PATH[@]}" \
				--format="${BASEDIR}/../scripts/macho.py" ;;
		*)
			test-fcd "${PROGRAM}" --header "${HEADER}" ;;
	esac
done

# Commit and publish results.
git add .
git commit -m "Test results on ${TRAVIS_OS_NAME} for fcd commit ${COMMIT_HASH}"
git push origin "${TRAVIS_OS_NAME}"
