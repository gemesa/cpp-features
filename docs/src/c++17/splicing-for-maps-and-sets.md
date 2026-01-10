# Splicing for maps and sets

## Use case

Move entries between symbol tables without copying.

## Explanation

`extract` removes and returns a node handle for single entries. `merge` transfers all nodes from one container to another. Both avoid copying data.

## Code

```cpp
{{#include ../../../src/c++17/splicing-for-maps-and-sets.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/splicing-for-maps-and-sets.cpp).

## Output

```
$ ./src/c++17/build/splicing-for-maps-and-sets
text size: 0
data size: 4
0x1000: _main
0x1100: _helper
0x2000: _global
0x2100: _buffer
```
