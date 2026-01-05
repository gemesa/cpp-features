# Range-based for loops

## Use case

Iterate over binary sections without manual indexing.

## Explanation

`for (auto& x : container)` iterates over all elements. Use `const auto&` for read-only access and `auto&` to modify elements. Works with any container that has `begin()`/`end()`.

## Code

```cpp
{{#include ../../../src/c++11/range-based-for-loops.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/range-based-for-loops.cpp).

## Output

```
$ ./src/c++11/build/range-based-for-loops
Addresses:
0x1000
0x1100
0x1200
After slide/offset:
0x10001000
0x10001100
0x10001200
```
