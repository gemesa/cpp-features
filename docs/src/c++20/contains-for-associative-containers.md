# `contains` for associative containers

## Use case

Check if key exists without verbose iterator check.

## Explanation

`.contains()` replaces the verbose `find() != end()` idiom.

## Code

```cpp
{{#include ../../../src/c++20/contains-for-associative-containers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/contains-for-associative-containers.cpp).

## Output

```
$ ./src/c++20/build/contains-for-associative-containers
Symbol found: _main
Breakpoint hit!
```
