# `std::midpoint`

## Use case

Calculate midpoint without overflow.

## Explanation

`(a * b) / 2` can overflow. `std::midpoint` handles this correctly.

## Code

```cpp
{{#include ../../../src/c++20/std-midpoint.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-midpoint.cpp).

## Output

```
$ ./src/c++20/build/std-midpoint
Range: 0x10000000 - 0x10001000
Midpoint: 0x10000800
```
