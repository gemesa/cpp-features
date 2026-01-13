# `auto(x)` (decay copy)

## Use case

Create explicit copy in expressions.

## Explanation

`auto(x)` creates a decayed prvalue copy. Useful in generic code.

## Code

```cpp
{{#include ../../../src/c++23/auto-x-decay-copy.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/auto-x-decay-copy.cpp).

## Output

```
$ ./src/c++23/build/auto-x-decay-copy
Original first: 0x1050
Sorted first: 0x1010
```
