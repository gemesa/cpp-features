# New rules for auto deduction from braced-init-list

## Use case

Cleaner initialization.

## Explanation

`auto x{value}` now deduces to the value's type, not `std::initializer_list`.

## Code

```cpp
{{#include ../../../src/c++17/new-rules-for-auto-deduction-from-braced-init-list.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/new-rules-for-auto-deduction-from-braced-init-list.cpp).

## Output

```
$ ./src/c++17/build/new-rules-for-auto-deduction-from-braced-init-list
addr0: 0x1000
addr1.size: 3
```
