# `std::make_unique`

## Use case

Safe creation of `unique_ptr` for parsed structures.

## Explanation

`std::make_unique<T>(args)` creates a `unique_ptr<T>` without using `new`. It is exception-safe and cleaner than `unique_ptr<T>(new T(args))`. Equivalent to what `make_shared` is for `shared_ptr`.

## Code

```cpp
{{#include ../../../src/c++14/std-make_unique.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B14/std-make_unique.cpp).

## Output

```
$ ./src/c++14/build/std-make_unique
Created LC 0x19
Segment size: 72
Destroyed LC 0x19
```
