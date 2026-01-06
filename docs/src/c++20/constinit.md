# `constinit`

## Use case

Ensure static variable is initialized at compile-time.

## Explanation

`constinit` = compile-time init. Prevents static initialization order bugs.

## Code

```cpp
{{#include ../../../src/c++20/constinit.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/constinit.cpp).

## Output

```
$ ./src/c++20/build/constinit
Base: 0x10000000
```
