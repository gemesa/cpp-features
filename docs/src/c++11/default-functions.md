# Default functions

## Use case

Explicitly request compiler-generated special member functions (constructors, assignment operators and destructors).

## Explanation

`= default` tells the compiler to generate the default implementation. Useful when we have a custom constructor but still want the default one.

## Code

```cpp
{{#include ../../../src/c++11/default-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/default-functions.cpp).

## Output

```
$ ./src/c++11/build/default-functions
a.addr: 0x1000
b.addr: 0x1000
c.addr: 0x1000
```
