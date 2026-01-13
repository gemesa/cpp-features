# `std::ranges::contains`

## Use case

Check if element exists in range.

## Explanation

Simple `contains()` for ranges. No more `find() != end()` idiom.

## Code

```cpp
{{#include ../../../src/c++23/std-ranges-contains.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-ranges-contains.cpp).

## Output

```
$ ./src/c++23/build/std-ranges-contains
Uses malloc.
Found BL instruction.
```
