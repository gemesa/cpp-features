# Ref-qualified member functions

## Use case

Different behavior for temporary vs persistent objects.

## Explanation

`&` and `&&` after member functions specify whether `*this` is an lvalue or rvalue. Return references from lvalues (persistent objects), move from rvalues (temporary objects).

## Code

```cpp
{{#include ../../../src/c++11/ref-qualified-member-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/ref-qualified-member-functions.cpp).

## Output

```
$ ./src/c++11/build/ref-qualified-member-functions
lvalue: returning ref.
rvalue: moving.
```
