# `std::forward`

## Use case

Preserve lvalue/rvalue when passing arguments through a wrapper.

## Explanation

`std::forward<T>(arg)` preserves the original value category. Without it, `arg` would always be treated as an lvalue (it has a name). Use it in templates that pass arguments to other functions.

## Code

```cpp
{{#include ../../../src/c++11/std-forward.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-forward.cpp).

## Output

```
$ ./src/c++11/build/std-forward
lvalue: _main
rvalue: _helper
```
