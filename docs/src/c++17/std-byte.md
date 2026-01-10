# `std::byte`

## Use case

Explicit byte type for binary data.

## Explanation

`std::byte` is for raw bytes. Only bitwise ops are allowed (no arithmetic). Cleaner intent than `char` or `uint8_t`.

## Code

```cpp
{{#include ../../../src/c++17/std-byte.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-byte.cpp).

## Output

```
$ ./src/c++17/build/std-byte
64-bit: true
```
