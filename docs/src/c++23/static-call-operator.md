# `static operator()`

## Use case

Stateless function objects without object overhead.

## Explanation

`static operator()` means no `this` pointer needed. This enables certain compiler optimizations. Also works for lambdas: `[]() static { ... }`.

## Code

```cpp
{{#include ../../../src/c++23/static-call-operator.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/static-call-operator.cpp).

## Output

```
$ ./src/c++23/build/static-call-operator
NOP count: 1
```
