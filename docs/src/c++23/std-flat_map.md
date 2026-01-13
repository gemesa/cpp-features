# `std::flat_map`

## Use case

Cache-friendly sorted map for lookup tables.

## Explanation

`std::flat_map` uses sorted vectors internally instead of tree nodes (`std::map`). Better cache locality, smaller memory footprint (compared to the tree where each node stores extra pointers). Drop-in replacement for `std::map`. Better for read-heavy use, worse for frequent insertions (elements have to be shifted).

## Code

```cpp
{{#include ../../../src/c++23/std-flat_map.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-flat_map.cpp).

## Output

```
$ ./src/c++23/build/std-flat_map
0x10001000: _main
0x10001000: _main
0x10002000: _helper
0x10003000: _cleanup
```
