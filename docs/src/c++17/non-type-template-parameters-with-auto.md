# Non-type template parameters with auto

## Use case

Compile-time buffer sizes with any constant type.

## Explanation

`auto` lets one template accept any constant type (`int`, `unsigned`, `char` etc.). Before C++17, we would need `template<int N>` or `template<size_t N>` (separate templates for each type).

## Code

```cpp
{{#include ../../../src/c++17/non-type-template-parameters-with-auto.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/non-type-template-parameters-with-auto.cpp).

## Output

```
$ ./src/c++17/build/non-type-template-parameters-with-auto
Small: 64
Page: 0x1000
```
