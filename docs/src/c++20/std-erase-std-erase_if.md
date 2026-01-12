# `std::erase`/`std::erase_if` (uniform container erasure)

## Use case

Simplified container element removal.

## Explanation

Before C++20: `v.erase(std::remove_if(v.begin(), v.end(), pred), v.end())`. Now just `std::erase_if(v, pred)`.

`std::erase_if` 

## Code

```cpp
{{#include ../../../src/c++20/std-erase-std-erase_if.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-erase-std-erase_if.cpp).

## Output

```
$ ./src/c++20/build/std-erase-std-erase_if
Removed 1 element(s).
Removed 1 element(s).
_helper
```
