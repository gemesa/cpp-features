# `std::reduce`

## Use case

Sum segment sizes, calculate total pages needed.

## Explanation

`std::reduce` sums elements (parallelizable). `std::transform_reduce` transforms each element first, then reduces. Both require associative (grouping does not matter) and commutative (order does not matter).

## Code

```cpp
{{#include ../../../src/c++17/std-reduce.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-reduce.cpp).

## Output

```
$ ./src/c++17/build/std-reduce
Raw total: 0x69cf
Pages needed: 9
```
