# `[[likely]]` and `[[unlikely]]` attributes

## Use case

Hint to optimizer for branch prediction.

## Explanation

Hints for branch prediction. Does not change semantics (meaning of the code), may improve performance.

## Code

```cpp
{{#include ../../../src/c++20/likely-unlikely-attributes.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/likely-unlikely-attributes.cpp).

## Output

```
$ ./src/c++20/build/likely-unlikely-attributes
Is Mach-O: true
```
