# Strongly-typed enums

## Use case

Type-safe Mach-O constants that do not pollute namespace.

## Explanation

`enum class` creates type-safe enums. Values are scoped (`Type::Value`), do not implicitly convert to int and will not clash with other enums.

## Code

```cpp
{{#include ../../../src/c++11/strongly-typed-enums.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/strongly-typed-enums.cpp).

## Output

```
$ ./src/c++11/build/strongly-typed-enums
FileType raw value: 2
```
