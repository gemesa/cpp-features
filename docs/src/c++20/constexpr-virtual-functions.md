# `constexpr virtual` functions

## Use case

Polymorphism at compile-time.

## Explanation

Virtual functions can be `constexpr` in C++20, enabling compile-time polymorphism.

## Code

```cpp
{{#include ../../../src/c++20/constexpr-virtual-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/constexpr-virtual-functions.cpp).

## Output

```
$ ./src/c++20/build/constexpr-virtual-functions
Stack alloc: 32 bytes.
```
