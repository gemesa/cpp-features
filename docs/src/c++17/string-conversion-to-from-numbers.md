# String conversion to/from numbers

## Use case

Fast, non-throwing number parsing.

## Explanation

`std::from_chars` and `std::to_chars` are fast, non-allocating conversions.

## Code

```cpp
{{#include ../../../src/c++17/string-conversion-to-from-numbers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/string-conversion-to-from-numbers.cpp).

## Output

```
$ ./src/c++17/build/string-conversion-to-from-numbers
Parsed 0x10001000
String: 10001000
```
