# Bit operations

## Use case

Portable bit manipulation.

## Explanation

[`<bit>` header](https://en.cppreference.com/w/cpp/header/bit.html) provides portable bit operations. Before C++20, for example, we had to use [`__builtin_popcount(x)` (`gcc`/`clang`) vs `__popcnt(x)` (MSVC)](https://stackoverflow.com/questions/3849337/msvc-equivalent-to-builtin-popcount). 

## Code

```cpp
{{#include ../../../src/c++20/bit-operations.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/bit-operations.cpp).

## Output

```
$ ./src/c++20/build/bit-operations
popcount: 3
has_single_bit: 0
countl_zero: 0
countr_zero: 7
bit_width: 32
```
