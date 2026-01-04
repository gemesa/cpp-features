# `decltype`

## Use case

Write generic code that works with different binary formats (32-bit vs 64-bit).

## Explanation

`decltype(expr)` gives us the type of an expression. In generic code, we often cannot know the type ahead of time (it depends on template parameters). `decltype(bin.getEntryPoint())` becomes `uint32_t` or `uint64_t` depending on which binary type we pass in.

## Code

```cpp
{{#include ../../../src/c++11/decltype.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/decltype.cpp).

## Output

```
$ ./src/c++11/build/decltype
32-bit entry: 0x1000
64-bit entry: 0x10001000
```
