# `#elifdef`/`#elifndef`

## Use case

Cleaner platform detection macros.

## Explanation

Before C++23: `#elif defined(x)`. Now: `#elifdef x`.

## Code

```cpp
{{#include ../../../src/c++23/elifdef-elifndef.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/elifdef-elifndef.cpp).

## Output

```
$ ./src/c++23/build/elifdef-elifndef
Arch: ARM64
```
