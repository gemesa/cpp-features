# `noexcept`

## Use case

Enable efficient `std::vector` reallocation by promising moves will not throw.

## Explanation

`noexcept` promises a function will not throw exceptions. `std::vector` only uses move during reallocation if the move constructor is `noexcept` (otherwise it copies for exception safety). Always mark move operations `noexcept` when possible.

## Code

```cpp
{{#include ../../../src/c++11/noexcept.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/noexcept.cpp).

## Output

```
$ ./src/c++11/build/noexcept
Allocated 100 bytes.
Allocated 200 bytes.
Moved.
Allocated 300 bytes.
Moved.
Moved.
```
