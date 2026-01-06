# `std::ranges`

## Use case

Simplified algorithm calls. Pass container directly, use projections instead of lambdas.

## Explanation

`std::ranges::` alrogithms take containers directly (no `.begin()`/`.end()`). Projections (`&Symbol::addr`) extract the field to compare (replacing simple lambdas).

## Code

```cpp
{{#include ../../../src/c++20/std-ranges.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-ranges.cpp).

## Output

```
$ ./src/c++20/build/std-ranges
_main @ 0x1000
_init @ 0x1020
_helper @ 0x1030
```
