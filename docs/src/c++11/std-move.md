# `std::move`

## Use case

Transfer ownership of data without copying.

## Explanation

`std::move` casts an lvalue to an rvalue reference (enabling the move constructor/assignment). The data is transferred, not copied (the original vector is left empty).

## Code

```cpp
{{#include ../../../src/c++11/std-move.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-move.cpp).

## Output

```
$ ./src/c++11/build/std-move
Before move: 3 instructions.
After move:
  original: 0
  cache: 3
```
