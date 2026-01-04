# Lambda expressions

## Use case

Custom predicates for filtering/searching binary data.

## Explanation

Lambdas are inline function objects. They keep related code together, can cpature variables (`[]` captures nothing, `[=]` copies locals, `[&]` references locals) and avoid polluting the namespace.

## Code

```cpp
{{#include ../../../src/c++11/lambda-expressions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/lambda-expressions.cpp).

## Output

```
$ ./src/c++11/build/lambda-expressions
Exported symbols:
  0x1000 _main
  0x1200 _public_api
Symbols in range:
  Found 2 symbols.
```
