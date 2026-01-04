# User-defined literals

## Use case

Readable size constans without manual multiplication.

## Explanation

User-defined literals let us write `64_KB` instead of `64 * 1024`. The `_` prefix is required.

## Code

```cpp
{{#include ../../../src/c++11/user-defined-literals.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/user-defined-literals.cpp).

## Output

```
$ ./src/c++11/build/user-defined-literals
Stack size: 8388608 bytes.
Page size: 4096 bytes.
```
