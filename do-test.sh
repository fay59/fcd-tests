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

# usage: $0 path/to/fcd
# This script runs fcd over every binary that has a matching header in the bin/
# directory, then produces a fancy little report in SUMMARY.md.

BASEDIR="$(dirname "$0")"
FCD="$1"

if [ "${#FCD}" -eq 0 ]; then
	echo "usage: $0 path/to/fcd"
	exit 1
fi

function fcd {
	local -r PROGRAM="$1"
	local -r PROGRAM_BASE_NAME=$(basename $PROGRAM)
	local -r OUTPUT_PATH="${BASEDIR}/output/${PROGRAM_BASE_NAME}.c"
	local -r ERROR_PATH="${BASEDIR}/error/${PROGRAM_BASE_NAME}.log"
	rm -f "${OUTPUT_PATH}" "${ERROR_PATH}"
	shift
	
	local TIMEFORMAT="%R"
	TIME=$(ulimit -SHt 30; {
		time "${FCD}" -I . -I "${BASEDIR}/include" "$@" "${PROGRAM}" \
			> "${OUTPUT_PATH}" \
			2> "${ERROR_PATH}";
	} 2>&1)
	local RESULT_STATUS=$?
	echo "| ${PROGRAM_BASE_NAME} | ${RESULT_STATUS} | ${TIME} |"
	return $RESULT_STATUS
}

# Download dependencies and prepare header paths.
mkdir -p "${BASEDIR}/download"

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
	DOWNLOAD_PATH="download/${LIB}.tar.gz"
	echo "Downloading ${URL}"
	curl -s "${URL}" -o "${DOWNLOAD_PATH}"
	tar -xf "${DOWNLOAD_PATH}" -C "${BASEDIR}/include/apple"
	APPLE_INCLUDE_PATH+=(-I "${BASEDIR}/include/apple/${LIB}/include")
done

mkdir -p "${BASEDIR}/include/ubuntu"
for LIB in "${UBUNTU_PACKAGES[@]}"; do
	URL="http://ftp.us.debian.org/debian/pool/main/${LIB:0:1}/${LIB}"
	DOWNLOAD_PATH="download/$(basename "${LIB}")"
	echo "Downloading ${URL}"
	curl -s "${URL}" -o "${DOWNLOAD_PATH}"
	
	# We can't use dpkg on macOS.
	DATA_FILE="download/$(ar -t ${DOWNLOAD_PATH} | tail -n 1)"
	ar -x "${DOWNLOAD_PATH}" "${DATA_FILE}"
	tar -xf "${DATA_FILE}" -C "${BASEDIR}/include/ubuntu"
done

# Run tests.
OUTPUT_LOG="${BASEDIR}/SUMMARY.md"
echo "| Program | Exit Code | Execution Time |" | tee "${OUTPUT_LOG}"
echo "| ------- |:--------- | --------------:|" | tee -a "${OUTPUT_LOG}"
mkdir -p "${BASEDIR}/output" "${BASEDIR}/error"
for HEADER in "${BASEDIR}"/bin/*.h; do
	PROGRAM="${HEADER%.h}"
	IFS="" read -r FIRST_LINE < "${HEADER}"
	# Assumed to be #include "linux.h" or #include "osx.h".
	case "${FIRST_LINE:10:${#FIRST_LINE}-13}" in
		linux)
			fcd "${PROGRAM}" --header "${HEADER}" "${UBUNTU_INCLUDE_PATH[@]}";;
		osx)
			fcd "${PROGRAM}" --header "${HEADER}" "${APPLE_INCLUDE_PATH[@]}" \
				--format="${BASEDIR}/../scripts/macho.py" ;;
		*)
			fcd "${PROGRAM}" --header "${HEADER}" ;;
	esac | tee -a "${OUTPUT_LOG}"
done
