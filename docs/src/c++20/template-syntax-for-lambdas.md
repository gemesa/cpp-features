# Template syntax for lambdas

## Use case

Access template parameter inside lambda.

## Explanation

`[]<typename T>` gives access to T inside lambda.

## Code

```cpp
{{#include ../../../src/c++20/template-syntax-for-lambdas.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/template-syntax-for-lambdas.cpp).

## Output

```
$ ./src/c++20/build/template-syntax-for-lambdas
Element size: 8 bytes.
Analyzing 0x10001000.
Analyzing 0x10002000.
```
