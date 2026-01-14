# `std::move_only_function`

## Use case

Type-erased callable that captures move-only types.

## Explanation

Like `std::function` but does not require copyable callable.

## Code

```cpp
{{#include ../../../src/c++23/std-move_only_function.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-move_only_function.cpp).

## Output

```
$ ./src/c++23/build/std-move_only_function
Address: 0x1000
```
