# Monadic operations for `std::optional`

## Use case

Chain operations that might fail.

## Explanation

`transform` = apply functions, wrap result in optional (if empty, stays empty). `and_then` = apply function that returns optional, flatten result (avoids `optional<optional<T>>`). `or_else` = provide fallback if empty. No more nested `if (opt.has_value())` checks.

## Code

```cpp
{{#include ../../../src/c++23/monadic-operations.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/monadic-operations.cpp).

## Output

```
$ ./src/c++23/build/monadic-operations
Result: main
```
