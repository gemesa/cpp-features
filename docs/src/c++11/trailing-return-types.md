# Trailing return types

## Use case

Return types that depends on template parameters.

## Explanation

`auto f() -> Type` is an alternative syntax for specifying return types. Required in C++11 when the return type depends on parameters (like `decltype(a + b)`). Also works with lambdas: `[]() -> Type {}`.

## Code

```cpp
{{#include ../../../src/c++11/trailing-return-types.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/trailing-return-types.cpp).

## Output

```
$ ./src/c++11/build/trailing-return-types
r1: 0x1100
r2: 0x1100
entry: 0x10001000
```
