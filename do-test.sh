#!/bin/bash

# do-test.sh
# Copyright (C) 2017 Félix Cloutier.
# All Rights Reserved.
#
# This file is distributed under the University of Illinois Open Source
# license. See LICENSE.md for details.
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
	rm -f "${OUTPUT_PATH}" "${ERROR_PATH}"
	
	local TIMEFORMAT="%R"
	TIME=$(ulimit -SHt 30; {
		time "${FCD}" -I . -I "${BASEDIR}/include" "$@" \
			> "${BASEDIR}/output/${PROGRAM_BASE_NAME}.c" \
			2> "${BASEDIR}/error/${PROGRAM_BASE_NAME}.log";
	} 2>&1)
	local RESULT_STATUS=$?
	echo "| ${PROGRAM_BASE_NAME} | ${RESULT_STATUS} | ${TIME} |"
	return $RESULT_STATUS
}

# Download dependencies and prepare header paths.
DOWNLOAD_DIR="${BASEDIR}/download"
mkdir -p "${DOWNLOAD_DIR}"

APPLE_OPENSOURCE_LIBS=(Libc)
UBUNTU_PACKAGES=(glibc/libc6-dev_2.24-9_amd64.deb)

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
	DOWNLOAD_PATH="${DOWNLOAD_DIR}/${LIB}.tar.gz"
	echo "Downloading ${URL}"
	curl -s "${URL}" -o "${DOWNLOAD_PATH}"
	tar -xf "${DOWNLOAD_PATH}" -C "${BASEDIR}/include/apple"
	APPLE_INCLUDE_PATH+=(-I "${BASEDIR}/include/apple/${LIB}/include")
done

mkdir -p "${BASEDIR}/include/ubuntu"
for LIB in "${UBUNTU_PACKAGES[@]}"; do
	URL="http://ftp.us.debian.org/debian/pool/main/${LIB:0:1}/${LIB}"
	DOWNLOAD_PATH="${DOWNLOAD_DIR}/$(basename "${LIB}")"
	echo "Downloading ${URL}"
	curl -s "${URL}" -o "${DOWNLOAD_PATH}"
	
	# We can't use dpkg on macOS.
	DATA_FILE_NAME="$(ar -t ${DOWNLOAD_PATH} | tail -n 1)"
	ar -x "${DOWNLOAD_PATH}" "${DATA_FILE_NAME}"
	tar -xf "${DATA_FILE_NAME}" -C "${BASEDIR}/include/ubuntu"
	rm "${DATA_FILE_NAME}"
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
