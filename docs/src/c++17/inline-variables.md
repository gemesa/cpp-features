# `inline` variables

## Use case

Header-only constants without [ODR](https://en.wikipedia.org/wiki/One_Definition_Rule) issues.

## Explanation

`inline` variables can be defined in headers without causing multiple definition errors.

## Code

```cpp
{{#include ../../../src/c++17/inline-variables.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/inline-variables.cpp).

## Output

```
$ ./src/c++17/build/inline-variables
64-bit magic: 0xfeedfacf
```
