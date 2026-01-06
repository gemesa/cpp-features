# `std::span`

## Use case

Non-owning view of contiguous memory.

## Explanation

`std::span` replaces pointer+length pairs. Non-owning, works with any contiguous container.

## Code

```cpp
{{#include ../../../src/c++20/std-span.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-span.cpp).

## Output

```
$ ./src/c++20/build/std-span
cf fa ed fe 
0 0 0 0 
cf fa
```
