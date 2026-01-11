# `__VA_OPT__`

## Use case

Clean variadic macros without trailing comma issues.

## Explanation

`__VA_OPT__(,)` inserts comma only when `__VA_ARGS__` is non-empty.

## Code

```cpp
{{#include ../../../src/c++20/va-opt.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/va-opt.cpp).

## Output

```
$ ./src/c++20/build/va-opt
Analysis started.
Found branch at 0x1000
```
