# Move semantics

## Use case

Efficiently transfer ownership of large binary buffers when parsing Mach-O segments.

## Code

```cpp
{{#include ../../../src/c++11/move-semantics.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/move-semantics.cpp).

## Explanation

When analyzing large binaries, we do not want to copy megabytes of data. Move semantics lets us transfer ownership of buffers efficiently. The new owner steals the pointer, leaving the old object empty.
