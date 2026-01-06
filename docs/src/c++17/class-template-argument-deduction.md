# Class template argument deduction

## Use case

Cleaner standard library usage.

## Explanation

CTAD lets us omit template arguments when the compiler can deduce them from constructor arguments.

## Code

```cpp
{{#include ../../../src/c++17/class-template-argument-deduction.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/class-template-argument-deduction.cpp).

## Output

```
$ ./src/c++17/build/class-template-argument-deduction
Vector size: 3
```
