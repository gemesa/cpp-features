# `std::unreachable`

## Use case

Mark unreachable code for optimization.

## Explanation

`std::unreachable` = UB if reached, but enables certain optimizations (e.g. compiler can eliminate dead code paths).

## Code

```cpp
{{#include ../../../src/c++23/std-unreachable.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-unreachable.cpp).

## Output

```
$ ./src/c++23/build/std-unreachable
arm64
```
