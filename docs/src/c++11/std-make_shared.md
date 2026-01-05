# `std::make_shared`

## Use case

Efficient creation of shared pointers.

## Explanation

`std::make_shared<T>(arg)` creates a `shared_ptr` in one allocation (managed object + control block). More efficient and exception-safe than `shared_ptr<T>(new T(arg))` (which does 2 allocations).

## Code

```cpp
{{#include ../../../src/c++11/std-make_shared.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-make_shared.cpp).

## Output

```
$ ./src/c++11/build/std-make_shared
Created.
Ref count: 2
Destroyed.
```
