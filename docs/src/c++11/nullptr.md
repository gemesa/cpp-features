# `nullptr`

## Use case

Unambiguous null checks when functions are overloaded.

## Explanation

`NULL` is just `0`, so the compiler cannot choose between `uint64_t` and `const char *`. `nullptr` has type `std::nullpts_t` which only converts to pointers. This makes the call unambiguous.

## Code

```cpp
{{#include ../../../src/c++11/nullptr.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/nullptr.cpp).

## Output

```
$ ./src/c++11/build/nullptr
Analyzing address: 0x10001000
Analyzing symbol: _main
Analyzing symbol: (null)
```
