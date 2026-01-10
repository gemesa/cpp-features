# `std::clamp`

## Use case

Bound values to valid ranges.

## Explanation

`std::clamp(v, lo, hi)` returns `v` bounded to `[lo, hi]`.

## Code

```cpp
{{#include ../../../src/c++17/std-clamp.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-clamp.cpp).

## Output

```
$ ./src/c++17/build/std-clamp
Clamped: 0x4000
```
