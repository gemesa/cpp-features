# `constexpr if`

## Use case

Compile-time branching for 32/64-bit handling.

## Explanation

`if constexpr` evaluates at compile-time.

## Code

```cpp
{{#include ../../../src/c++17/constexpr-if.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/constexpr-if.cpp).

## Output

```
$ ./src/c++17/build/constexpr-if
64-bit: 0x10001000
32-bit: 0x1000
```
