# `std::mdspan`

## Use case

Multidimensional view of contiguous memory.

## Explanation

`std::mdspan` = multidimensional `std::span`. Non-owning view with arbitrary dimensions.

## Code

```cpp
{{#include ../../../src/c++23/std-mdspan.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-mdspan.cpp).

## Output

```
$ ./src/c++23/build/std-mdspan
cffaedfe00000000
0102030405060708
```
