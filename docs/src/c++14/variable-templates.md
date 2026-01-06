# Variable templates

## Use case

Architecture specific constants.

## Explanation

Variable templates allow templated constants. Cleaner than `static` class members or `constexpr` functions.

## Code

```cpp
{{#include ../../../src/c++14/variable-templates.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/variable-templates.cpp).

## Output

```
$ ./src/c++14/build/variable-templates
Page size: 0x1000
64-bit base: 0x10000000
32-bit base: 0x1000
```
