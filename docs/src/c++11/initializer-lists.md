# Initializer lists

## Use case

Define known suspicious API patterns concisely.

## Explanation

Initializer lists let us pass `{a, b, c}` syntax to functions. They do not allocate heap memory (unlike e.g. `std::vector`). Use them for read-only literal data.

## Code

```cpp
{{#include ../../../src/c++11/initializer-lists.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/initializer-lists.cpp).

## Output

```
$ ./src/c++11/build/initializer-lists
Checking 1 suspicious patterns:
  libSystem.B.dylib: ptrace sysctl
```