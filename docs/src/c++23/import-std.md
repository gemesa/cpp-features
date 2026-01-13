# `import std;`

## Use case

Import entire standard library with one statement.

## Explanation

`import std;` replaces all `#include <...>` headers. Faster compilation, no macro leakage.

Standard library modules are [either unsupported or only partially supported](https://en.cppreference.com/w/cpp/compiler_support/23.html) at the moment (search for "Standard Library Modules"). Therefore, they are not covered here yet.
