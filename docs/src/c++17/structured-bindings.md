# Structured bindings

## Use case

Unpack tuples, pairs, arrays and structs cleanly.

## Explanation

`auto [a, b, c] = expr` unpack tuple-like objects and aggregate types (e.g. plain structs with public members) into named variables. Cleaner than `std::tie` and `std::get`.

## Code

```cpp
{{#include ../../../src/c++17/structured-bindings.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/structured-bindings.cpp).

## Output

```
$ ./src/c++17/build/structured-bindings
_main @ 0x10001000
_main @ 0x10001000
_helper @ 0x10002000
```
