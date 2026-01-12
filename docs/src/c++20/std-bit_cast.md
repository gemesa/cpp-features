# `std::bit_cast`

## Use case

Safer reinterpretation of bits.

## Explanation

[`std::bit_cast`](https://stackoverflow.com/questions/53401654/why-was-stdbit-cast-added-if-reinterpret-cast-could-do-the-same) copies bits to a new object. Also `constexpr`-friendly and catches size mismatches at compile-time.

## Code

```cpp
{{#include ../../../src/c++20/std-bit_cast.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-bit_cast.cpp).

## Output

```
$ ./src/c++20/build/std-bit_cast
Magic: 0xfeedfacf
```
