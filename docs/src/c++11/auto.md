# Auto

## Use case

Simplify iterator-heavy code when walking symbol tables.

## Explanation

`auto` lets the compiler deduce types. Reduces verbosity with STL containers and iterators.

## Code

```cpp
{{#include ../../../src/c++11/auto.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/auto.cpp).

## Output

```
$ ./src/c++11/build/auto
Lookup 0x10001000: _main
Lookup 0x20000000: <unknown>
```
