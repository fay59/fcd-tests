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

# Set up test repository by checking out the OS's branch and merging with master
# in case anything changed. The actual test logic is kept in a separate file
# such that it can be updated by a merge.

if git checkout "${TRAVIS_OS_NAME}"; then
	git merge master
else
	git checkout -b "${TRAVIS_OS_NAME}"
fi

"$(dirname "$0")/do-test.sh" "$@"
