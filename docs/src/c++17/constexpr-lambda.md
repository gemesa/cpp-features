# `constexpr` lambda

## Use case

Compile-time instruction decoding.

## Explanation

Lambdas can now be `constexpr`.

## Code

```cpp
{{#include ../../../src/c++17/constexpr-lambda.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/constexpr-lambda.cpp).

## Output

```
$ ./src/c++17/build/constexpr-lambda
Rd: x29
```
