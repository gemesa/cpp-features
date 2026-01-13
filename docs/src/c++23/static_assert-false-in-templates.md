# `static_assert(false)` in templates

## Use case

Error on invalid template instantiation.

## Explanation

`static_assert(false)` inside a template is deferred until instantiation.

## Code

```cpp
{{#include ../../../src/c++23/static_assert-false-in-templates.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/static_assert-false-in-templates.cpp).

## Output

```
$ ./src/c++23/build/static_assert-false-in-templates
Swapped: 0x12
Swapped: 0x1200
```
