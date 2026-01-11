# `std::not_fn`

## Use case

Negate predicates.

## Explanation

`std::not_fn` wraps a callable and negates its result.

## Code

```cpp
{{#include ../../../src/c++17/std-not_fn.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-not_fn.cpp).

## Output

```
$ ./src/c++17/build/std-not_fn
Non-zero: 3
```
