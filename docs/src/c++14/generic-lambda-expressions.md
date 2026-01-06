# Generic lambda expressions

## Use case

Generic filtering for any container type.

## Explanation

`auto` in lambda parameters makes the closure's `operator()` a [template](https://en.cppreference.com/w/cpp/language/lambda.html#Closure_type) (so one lambda works with any type).


## Code

```cpp
{{#include ../../../src/c++14/generic-lambda-expressions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/generic-lambda-expressions.cpp).

## Output

```
$ ./src/c++14/build/generic-lambda-expressions
0x10001000
0xfeedfacf
```
