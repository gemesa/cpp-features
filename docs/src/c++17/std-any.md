# `std::any`

## Use case

Store arbitrary metadata on symbols.

## Explanation

`std::any` stores any single value with type safety at access time. Unlike `void*`, it knows its type.

## Code

```cpp
{{#include ../../../src/c++17/std-any.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-any.cpp).

## Output

```
$ ./src/c++17/build/std-any
Address: 0x10001000
Address type: y
Name: _main
```
