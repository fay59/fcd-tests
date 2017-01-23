# fcd-tests

This repository contains binary programs that [fcd][1] attempts to decompile as part of its automated tests through Travis CI. Travis CI machines check in a specific branch, depending on their operating system (either `linux` or `osx` at the moment), build fcd, and then run it on every program under the `bin/` directory.

Under these branches, they publish the decompiled output and the error output under `output/` and `error/`, respectively. Additionally, decompilation time is recorded in the `time.csv` file. The idea is that output can be compared across different platforms and revisions of fcd.

The `master` branch is meant to have the "master copy" of the test script and executables. Travis CI virtual machines merge with master every time they run.

## Limitations

Fcd does not have a stable output. This means that two invocations on the same executable can have different results. This complexifies the task of verifying output across runs.

  [1]: https://github.com/zneak/fcd