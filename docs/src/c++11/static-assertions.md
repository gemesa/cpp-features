# Static assertions

## Use case

Validate struct layouts match binary format requirements at compile time.

## Explanation

`static_assert` catches mistakes at compile time.

## Code

```cpp
{{#include ../../../src/c++11/static-assertions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/static-assertions.cpp).

## Output

```
$ ./src/c++11/build/static-assertions
MachHeader64 size: 32 bytes
All static assertions passed at compile time.
```