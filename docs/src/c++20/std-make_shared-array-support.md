# `std::make_shared` array support

## Use case

Allocate shared arrays for buffers.

## Explanation

`std::make_shared<T[]>(n)` allocates an array with shared ownership. Before C++20, we needed `shared_ptr<T[]>(new T[n])`.

## Code

```cpp
{{#include ../../../src/c++20/std-make_shared-array-support.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-make_shared-array-support.cpp).

## Output

```
$ ./src/c++20/build/std-make_shared-array-support
Magic: 0xfeedfacf
```
