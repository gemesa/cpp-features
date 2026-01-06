# `std::variant`

## Use case

Type-safe union for different value types.

## Explanation

`std::variant` is a type-safe union. Use `std::get<T>` or `std::visit` to access values.

## Code

```cpp
{{#include ../../../src/c++17/std-variant.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-variant.cpp).

## Output

```
$ ./src/c++17/build/std-variant
Address: 0x10001000
Name: _main
```
