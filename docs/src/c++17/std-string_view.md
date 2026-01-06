# `std::string_view`

## Use case

Non-owning string reference for parsing.

## Explanation

`std::string_view` is a non-owning view into a string. No copies, works with any string source.

## Code

```cpp
{{#include ../../../src/c++17/std-string_view.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-string_view.cpp).

## Output

```
$ ./src/c++17/build/std-string_view
Symbol: main
Symbol: helper
Symbol: func
```
