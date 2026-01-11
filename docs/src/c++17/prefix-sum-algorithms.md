# Prefix sum algorithms

## Use case

Compute string table offsets.

## Explanation

`exclusive_scan` = start offsets. `inclusive_scan` = end offsets. `transform_*` variants transform before scanning.

## Code

```cpp
{{#include ../../../src/c++17/prefix-sum-algorithms.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/prefix-sum-algorithms.cpp).

## Output

```
$ ./src/c++17/build/prefix-sum-algorithms
0 5 12 
5 12 18 
0 6 14 
6 14 21
```
