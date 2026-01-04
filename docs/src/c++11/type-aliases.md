# Type aliases

## Use case

Readable type names for binary analysis data structures.

## Explanation

`using` aliases are more readable than `typedef` and work with templates.

## Code

```cpp
{{#include ../../../src/c++11/type-aliases.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/type-aliases.cpp).

## Output

```
$ ./src/c++11/build/type-aliases
Symbols:
0x10001000:_main
0x10002000:_helper
```
