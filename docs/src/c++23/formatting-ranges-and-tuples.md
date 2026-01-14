# Formatting ranges and tuples

## Use case

Print containers directly with `std::print`/`std::format`.

## Explanation

`std::print` and `std::format` now support ranges and tuples. Format specs like `:#x` apply to elements.

## Code

```cpp
{{#include ../../../src/c++23/formatting-ranges-and-tuples.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/formatting-ranges-and-tuples.cpp).

## Output

```
$ ./src/c++23/build/formatting-ranges-and-tuples

```
