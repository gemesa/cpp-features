# Class types in non-type template parameters

## Use case

Use structs as template parameters.

## Explanation

Structs with only public members, no pointers and `constexpr`-compatible types can be NTTP. Keeps related values together (mask + value) instead of separate template params. Compiler fully inlines (no runtime overhead).

## Code

```cpp
{{#include ../../../src/c++20/class-types-in-non-type-template-parameters.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/class-types-in-non-type-template-parameters.cpp).

## Output

```
$ ./src/c++20/build/class-types-in-non-type-template-parameters
Matched BL.
```
