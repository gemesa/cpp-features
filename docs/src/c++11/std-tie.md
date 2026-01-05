# `std::tie`

## Use case

Unpack tuples into separate variables.

## Explanation

`std::tie` creates a tuple of references, allowing us to unpack a returned tuple into separate variables. We can use `std::ignore` to skip values we do not need. (Note: C++17 added structured bindings `auto [a, b, c] = ...` as a cleaner alternative).

## Code

```cpp
{{#include ../../../src/c++11/std-tie.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-tie.cpp).

## Output

```
$ ./src/c++11/build/std-tie
__TEXT @ 0x10000000
```
