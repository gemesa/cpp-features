# `std::apply`

## Use case

Call functions with tupple arguments.

## Explanation

`std::apply` unpacks a tuple and calls a function with its elements as arguments. Simpler than `index_sequence`.

## Code

```cpp
{{#include ../../../src/c++17/std-apply.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-apply.cpp).

## Output

```
$ ./src/c++17/build/std-apply
__TEXT @ 0x10000000 (size: 0x4000)
```
