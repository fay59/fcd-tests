# Origin of programs

The presence of every binary checked in to this repository is compliant with its distribution license.

To add a binary, first make sure that you are authorized to do so. Copy it to this directory and create a header file that has the same base name as the binary. This header must `#include` either `"linux.h"` or `"osx.h"`, depending on whether the executable is a Linux executable or a macOS executable, and any number of additional headers (like `stdio.h`) that will be pulled from the platform's standard headers.

Malicious or potentially malicious binaries, and binaries of unknown origin, are not accepted as automatic test inputs to fcd.

## 199x-name Programs

These programs are [IOCCC winners][1] from a given year. IOCCC content is distributed under the [CC BY-SA 3.0][2] license. Authors are identified in the binary name using the same name as the IOCCC displays.

## abnormal, conditionals

These programs were built on purpose to test specific features of fcd. These binaries are donated to the public domain.

## ceffectpp

[Ceffectpp][3] is licensed under the BSD-0 license.

  [1]: http://www.ioccc.org/faq.html
  [2]: https://creativecommons.org/licenses/by-sa/3.0/
  [3]: https://github.com/GavinHigham/ceffectpp
