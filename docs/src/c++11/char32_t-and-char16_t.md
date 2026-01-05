# `char32_t` and `char16_t`

## Use case

Handle Unicode strings in binary resources (Windows PE uses UTF-16).

## Explanation

`char16_t` and `char32_t` are fixed-width Unicode types. Use `u"..."` for UTF-16 and `U"..."` for UTF-32.

## Code

```cpp
{{#include ../../../src/c++11/char32_t-and-char16_t.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/char32_t-and-char16_t.cpp).

## Output

```
$ ./src/c++11/build/char32_t-and-char16_t
UTF-16 element size: 2 bytes.
UTF-32 element size: 4 bytes.
```
