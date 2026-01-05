# `std::begin`/`std::end`

## Use case

Write generic code that works with both C arrays and containers.

## Explanation

`std::begin()` and `std::end()` work with both C arrays and STL containers. We can write one template that handles both. Without them, C arrays require separate handling.

## Code

```cpp
{{#include ../../../src/c++11/std-begin-end.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-begin-end.cpp).

## Output

```
$ ./src/c++11/build/std-begin-end
fd 7b bf a9 
c0 3 5f d6
```
