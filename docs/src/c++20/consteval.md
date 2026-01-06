# `consteval` (immediate functions)

## Use case

Force compile-time evaluation.

## Explanation

`consteval` = must be compile-time. `constexpr` = can be compile-time.

## Code

```cpp
{{#include ../../../src/c++20/consteval.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/consteval.cpp).

## Output

```
$ ./src/c++20/build/consteval
BL 0x40: 0x94000010
```
