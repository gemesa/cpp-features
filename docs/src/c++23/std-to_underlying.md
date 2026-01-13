# `std::to_underlying`

## Use case

Get underlying value of enum.

## Explanation

Shorter than `static_cast<std::underlying_type_t<E>>(e)`. Works with scoped enums.

## Code

```cpp
{{#include ../../../src/c++23/std-to_underlying.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-to_underlying.cpp).

## Output

```
$ ./src/c++23/build/std-to_underlying
File type: 0x6
```
