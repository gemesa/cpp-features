# Multidimensional [] operator

## Use case

2D memory views (matrixes).

## Explanation

Before C++23, `operator[]` was defined to take exactly one parameter. Now it accepts multiple parameters directly.

## Code

```cpp
{{#include ../../../src/c++23/multidimensional-subscript-operator.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/multidimensional-subscript-operator.cpp).

## Output

```
$ ./src/c++23/build/multidimensional-subscript-operator
0xcf
```
