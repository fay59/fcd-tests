# fcd-tests

This repository contains binary programs that [fcd][1] attempts to decompile as part of its automated tests through Travis CI. Travis CI machines check in a specific branch, depending on their operating system (either [`linux`][2] or [`osx`][3] at the moment), build fcd, and then run it on every program under the `bin/` directory. (Note: due to a known issue that will be resolved when Travis enables Ubuntu 16.04 build hosts, Linux tests all fail at the moment, so head over to [`osx`][3] for a glimpse of fcd's output.)

Under these branches, they publish the decompiled output and the error output under `output/` and `error/`, respectively. Additionally, decompilation time is recorded in the `time.csv` file. The idea is that output can be compared across different platforms and revisions of fcd.

The `master` branch is meant to have the "master copy" of the test script and executables. Travis CI virtual machines merge with master every time they run.

  [1]: https://github.com/zneak/fcd
  [2]: https://github.com/zneak/fcd-tests/tree/linux
  [3]: https://github.com/zneak/fcd-tests/tree/osx
