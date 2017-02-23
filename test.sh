#!/bin/bash

# test.sh
# Copyright (C) 2017 Félix Cloutier.
# All Rights Reserved.
#
# This file is distributed under the University of Illinois Open Source
# license. See LICENSE.md for details.
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
TEST_GIT="git -C ${BASEDIR}"
if $TEST_GIT checkout --track "origin/${TRAVIS_OS_NAME}"; then
	$TEST_GIT merge --no-edit master
else
	$TEST_GIT checkout -b "${TRAVIS_OS_NAME}"
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

REMOTE_PATH=$($TEST_GIT config --get remote.origin.url | grep -oh '[^/]*/[^/]*$')
$TEST_GIT remote set-url origin "git@github.com:${REMOTE_PATH}"
$TEST_GIT config user.name "Travis CI"
$TEST_GIT config user.email "travis@zneak.github.io"
$TEST_GIT add .
$TEST_GIT commit -m "Test results on ${TRAVIS_OS_NAME} for fcd commit ${COMMIT_HASH}"

# Try to push at most 3 times
seq 1 3 | while
	read && ! GIT_SSH="./ssh-unattend.sh" $TEST_GIT push origin "${TRAVIS_OS_NAME}"
do
	$TEST_GIT pull -s ours --no-edit origin "${TRAVIS_OS_NAME}"
done


