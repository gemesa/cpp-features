# Variadic templates

## Use case

Generic hook wrapper that intercepts calls with any number of arguments.

## Explanation

`typename... Args` declares a parameter pack that captures zero or more types. `Args... args` captures the actual arguments. `args...` is used to expand them.

## Code

```cpp
{{#include ../../../src/c++11/variadic-templates.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/variadic-templates.cpp).

## Output

```
$ ./src/c++11/build/variadic-templates
Calling readMemory (1 args).
addr=0x10001000
Calling readMemory (2 args).
addr=0x10001000 len=0x100
```
