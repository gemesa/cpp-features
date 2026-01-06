# `std::optional`

## Use case

Return value that may or may not exist.

## Explanation

`std::optional<T>` holds either a value or nothing. Cleaner than returning sentinel values or pointers.

## Code

```cpp
{{#include ../../../src/c++17/std-optional.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-optional.cpp).

## Output

```
$ ./src/c++17/build/std-optional
Found: 0x10001000
Default: 0x0
```
