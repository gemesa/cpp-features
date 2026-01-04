# `constexpr`

## Use case

Compile-time buffer sizes and calculations.

## Explanation

`constexpr` values and functions can be evaluated at compile time. Array sizes, templates and `static_assert` all require compile-time constants. The same `constexpr` function works at compile time (for `smallBuffer` size) and runtime (with `count` variable).

## Code

```cpp
{{#include ../../../src/c++11/constexpr.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/constexpr.cpp).

## Output

```
$ ./src/c++11/build/constexpr
Buffer size: 400
Small buffer size: 40
Runtime calc: 200
```
