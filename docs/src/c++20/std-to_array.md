# `std::to_array`

## Use case

Convert C array to `std::array`.

## Explanation

`std::to_array` deduces size automatically. Useful for converting legacy C arrays.

## Code

```cpp
{{#include ../../../src/c++20/std-to_array.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-to_array.cpp).

## Output

```
$ ./src/c++20/build/std-to_array
Size: 4
0x910003fd
0x94000010
```
