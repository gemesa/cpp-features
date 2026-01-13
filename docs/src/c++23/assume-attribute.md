# `[[assume]]` attribute

## Use case

Help compiler optimize with known invariants (a condition that is always true at a certain point in your code).

## Explanation

`[[assume(expr)]]` tells the compiler the expression is always true. Enables aggressive optimizations. UB if assumption is violated at runtime.

## Code

```cpp
{{#include ../../../src/c++23/assume-attribute.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/assume-attribute.cpp).

## Output

```
$ ./src/c++23/build/assume-attribute
64-bit: true
```
