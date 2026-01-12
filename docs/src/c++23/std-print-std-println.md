# `std::print`/`std::println`

## Use case

Formatted output without `<<` chaining.

## Explanation

`std::println` = `std::format` + newline + stdout. Replaces verbose `std::cout << ... << "\n` chains.

## Code

```cpp
{{#include ../../../src/c++23/std-print-std-println.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-print-std-println.cpp).

## Output

```
$ ./src/c++23/build/std-print-std-println
Entry point: 0x10001000
Opcode: 0x94000010 at 0x10001000
```
