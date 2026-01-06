# Compile-time integer sequences

## Use case

Unpack tuple of segment info into function arguments.

## Explanation

`std::index_sequence` and `std::make_index_sequence<N>` generate compile-time sequences `0, 1, 2, ..., N-1`. Use with parameter pack expansion to unpack tuples or iterate arrays at compile-time.

## Code

```cpp
{{#include ../../../src/c++14/compile-time-integer-sequences.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/compile-time-integer-sequences.cpp).

## Output

```
$ ./src/c++14/build/compile-time-integer-sequences
__TEXT @ 0x10000000 (size: 0x4000)
```
