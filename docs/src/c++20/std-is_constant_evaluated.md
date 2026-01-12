# `std::is_constant_evaluated`

## Use case

Different code paths for compile-time and runtime.

## Explanation

`std::is_constant_evaluated` returns true during constant evaluation. Enables different implementation for compile-time vs runtime.

## Code

```cpp
{{#include ../../../src/c++20/std-is_constant_evaluated.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-is_constant_evaluated.cpp).

## Output

```
$ ./src/c++20/build/std-is_constant_evaluated
Checking magic at runtime.
a: true, b: true
```
