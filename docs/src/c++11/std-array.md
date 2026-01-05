# `std::array`

## Use case

Fixed-size buffer with bounds checking and STL support.

## Explanation

`std::array` is a fixed-size container that wraps a C array. Unlike raw arrays, it knows its size, works with STL algorithms and has `.at()` for bound-checked access. `T[N]` access can be used as well (e.g. for performance critical applications).

## Code

```cpp
{{#include ../../../src/c++11/std-array.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-array.cpp).

## Output

```
$ ./src/c++11/build/std-array
Size: 4
First: 0xfd
Last: 0xa9
```
