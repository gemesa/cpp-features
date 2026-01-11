# Lambda capture of parameter pack

## Use case

Capture variadic args in a lambda.

## Explanation

`...args` in capture expands pack. Each element capture separately.

## Code

```cpp
{{#include ../../../src/c++20/lambda-capture-of-parameter-pack.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/lambda-capture-of-parameter-pack.cpp).

## Output

```
$ ./src/c++20/build/lambda-capture-of-parameter-pack
Symbol: _main @ 10001000
```
