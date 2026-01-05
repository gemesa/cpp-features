# Tuples

## Use case

Return multiple values from a function.

## Explanation

`std::tuple` bundles multiple values of different types. Use `std::make_tuple` to create, `std::get<N>` to access by index. 

## Code

```cpp
{{#include ../../../src/c++11/tuples.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/tuples.cpp).

## Output

```
$ ./src/c++11/build/tuples
Found: true
Entry: 0x10001000
Symbol: _main
```
