# `std::byteswap`

## Use case

Endianness conversion.

## Explanation

Before C++23: builtins. Now portable `std::byteswap`.

## Code

```cpp
{{#include ../../../src/c++23/std-byteswap.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-byteswap.cpp).

## Output

```
$ ./src/c++23/build/std-byteswap
BE: 0xfeedfacf
LE: 0xcffaedfe
```
