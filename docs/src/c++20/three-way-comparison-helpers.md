# Three-way comparison helpers (spaceship operator helpers)

## Use case

Convert spaceship result to bool.

## Explanation

`std::is_eq`, `std::is_lt`, `std::is_gt`, `std::is_lteq`, `std::is_gteq` convert comparison result to bool.

## Code

```cpp
{{#include ../../../src/c++20/three-way-comparison-helpers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/three-way-comparison-helpers.cpp).

## Output

```
$ ./src/c++20/build/three-way-comparison-helpers
is_lt: true
is_eq: false
is_gt:false
is_eq(a <=> c): true
is_lteq(a <=> b): true
is_gteq(b <=> a): true
```
