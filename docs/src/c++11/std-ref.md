# `std::ref`

## Use case

Pass references to threads (which copy arguments by default).

## Explanation

`std::thread` copies its arguments by default. `std::ref(x)` creates a wrapper object that holds a pointer.

## Code

```cpp
{{#include ../../../src/c++11/std-ref.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-ref.cpp).

## Output

```
$ ./src/c++11/build/std-ref
Count: 1
```
