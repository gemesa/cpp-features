# Explicit conversion functions

## Use case

Safe boolean checks without accidental integer conversion.

## Explanation

`explicit operator bool()` allows `if (obj)` checks but prevents conversion to `int`. Without `explicit`, code like `int x = result` would compile silently (and might cause bugs).

## Code

```cpp
{{#include ../../../src/c++11/explicit-conversion-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/explicit-conversion-functions.cpp).

## Output

```
$ ./src/c++11/build/explicit-conversion-functions
Valid.
```
