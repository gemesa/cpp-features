# Relaxing constraints on constexpr functions

## Use case

Compile-time instruction decoding with loops and conditionals.

## Explanation

`constexpr` now allows loops, `if`s, multiple returns and local variables (non-exhaustive list).

## Code

```cpp
{{#include ../../../src/c++14/relaxing-constraints-on-constexpr-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/relaxing-constraints-on-constexpr-functions.cpp).

## Output

```
$ ./src/c++14/build/relaxing-constraints-on-constexpr-functions
Rd: fp
```
