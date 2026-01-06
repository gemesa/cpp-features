# Concepts

## Use case

Constrain template parameters for type safety.

## Explanation

Concepts use readable constraints. The compiler error now says exactly which concept failed any why.

## Code

```cpp
{{#include ../../../src/c++20/concepts.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/concepts.cpp).

## Output

```
$ ./src/c++20/build/concepts
0x10001000
```
