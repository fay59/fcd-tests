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
FCD="$1"
COMMIT_HASH="$2"
BASEDIR=$(dirname "$0")

# This script wraps do-tests.sh, which actually does the testing, such that test
# results are published to the repository's remote. You should hopefully be able
# to run do-tests.sh by itself (and likely not this script, which needs to be
# run in a Travis environment).

if [ "${#FCD}" -eq 0 ]; then
	echo "Build failed!"
	exit 1
fi

# Select platform-specific branch, merge with master if necessary.
# ------------------------------------------------------------------------------
if git -C "${BASEDIR}" checkout --track "origin/${TRAVIS_OS_NAME}"; then
	git -C "${BASEDIR}" show --summary
	git -C "${BASEDIR}" merge --no-edit master
else
	git -C "${BASEDIR}" checkout -b "${TRAVIS_OS_NAME}"
fi

MERGE_STATUS=$?
if [ $MERGE_STATUS -ne 0 ]; then
	exit $MERGE_STATUS
fi

# Actually run tests.
# ------------------------------------------------------------------------------
"${BASEDIR}/do-test.sh" "${FCD}"

TESTS_STATUS=$?
if [ $TESTS_STATUS -ne 0 ]; then
	exit $TESTS_STATUS
fi

# Do SSH configuration and publish results.
# ------------------------------------------------------------------------------
(
	ENCRYPTED_KEY_VAR="encrypted_${TRAVIS_ENCRYPTION_LABEL}_key"
	ENCRYPTED_KEY_IV="encrypted_${TRAVIS_ENCRYPTION_LABEL}_iv"
	umask 0377
	openssl aes-256-cbc -K "${!ENCRYPTED_KEY_VAR}" -iv "${!ENCRYPTED_KEY_IV}" \
		-in "${BASEDIR}/deploy_key.enc" -out "${BASEDIR}/deploy_key" -d
)

REMOTE_PATH=$(git -C "${BASEDIR}" config --get remote.origin.url | grep -oh '[^/]*/[^/]*$')
git -C "${BASEDIR}" remote set-url origin "git@github.com:${REMOTE_PATH}"
git -C "${BASEDIR}" config user.name "Travis CI"
git -C "${BASEDIR}" config user.email "travis@zneak.github.io"
git -C "${BASEDIR}" add .
git -C "${BASEDIR}" commit -m "Test results on ${TRAVIS_OS_NAME} for fcd commit ${COMMIT_HASH}"
GIT_SSH="./ssh-unattend.sh" git -C "${BASEDIR}" push origin "${TRAVIS_OS_NAME}"

