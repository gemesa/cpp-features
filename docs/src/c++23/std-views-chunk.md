# `std::views::chunk`

## Use case

Process data in fixed-size blocks.

## Explanation

`chunk(n)` splits range into n-sized subranges. Last chunk may be smaller.

## Code

```cpp
{{#include ../../../src/c++23/std-views-chunk.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-views-chunk.cpp).

## Output

```
$ ./src/c++23/build/std-views-chunk
00010203
04050607
08090a0b
0c0d0e0f
```
