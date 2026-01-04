# Explicit virtual overrides

## Use case

Catch typos when overriding virtual functions.

## Explanation

`override` tells the compiler "we intend to override a base class function". If we misspell the function name or get the signature wrong, we get a compile error (instead of silently creating a new function that never gets called).

## Code

```cpp
{{#include ../../../src/c++11/explicit-virtual-overrides.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/explicit-virtual-overrides.cpp).

## Output

```
$ ./src/c++11/build/explicit-virtual-overrides
Running MachO analyzer.
```
