# Return type deduction

## Use case

Simplify template functions that return complex types.

## Explanation

`auto` return types lets the compiler deduce it from `return` statements. Cleaner than trailing return types. Use `auto&` to return references.

## Code

```cpp
{{#include ../../../src/c++14/return-type-deduction.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B14/return-type-deduction.cpp).

## Output

```
$ ./src/c++14/build/return-type-deduction
First address: 0x1000
```
