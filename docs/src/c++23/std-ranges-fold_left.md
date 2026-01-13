# `std::ranges::fold_left`

## Use case

Accumulate with explicit direction.

## Explanation

`fold_left` = `std::accumulate` for ranges. Also `fold_right`, `fold_left_first` (uses the first element as initial value).

## Code

```cpp
{{#include ../../../src/c++23/std-ranges-fold_left.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-ranges-fold_left.cpp).

## Output

```
$ ./src/c++23/build/std-ranges-fold_left
Total size: 0x3d00
Checksum: 0x26
```
