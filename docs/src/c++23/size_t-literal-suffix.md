# `size_t` literal suffix

## Use case

Avoid signed/unsigned comparison warnings.

## Explanation

`0uz` = `std::size_t`, `0z` = signed version of `std::size_t`. Integer literals are explained [here](https://en.cppreference.com/w/cpp/language/integer_literal.html).

## Code

```cpp
{{#include ../../../src/c++23/size_t-literal-suffix.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/size_t-literal-suffix.cpp).

## Output

```
$ ./src/c++23/build/size_t-literal-suffix
10
```
