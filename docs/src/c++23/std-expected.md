# `std::expected`

## Use case

Error handling without exceptions

## Explanation

`std::expected<T, E>` holds either a value or an error. Like Rust's `Result<T, E>`. Better than `std::optional` when you need error info.

## Code

```cpp
{{#include ../../../src/c++23/std-expected.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-expected.cpp).

## Output

```
$ ./src/c++23/build/std-expected
Magic: 0xfeedfacf
```
