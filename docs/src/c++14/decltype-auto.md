# `decltype(auto)`

## Use case

Perfect forwarding of return types in wrappers.

## Explanation

`decltype(auto)` deduces the exact type (including references and const). `auto` strips them.

## Code

```cpp
{{#include ../../../src/c++14/decltype-auto.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B14/decltype-auto.cpp).

## Output

```
$ ./src/c++14/build/decltype-auto
After decltype: 0x10003000
```
