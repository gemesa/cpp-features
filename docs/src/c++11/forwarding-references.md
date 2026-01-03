# Forwarding references

## Use case

Generic wrapper that logs function calls while preserving argument types.

## Explanation

`T&&` where `T` is a template is a forwarding reference (it binds to anything). Combined with `std::forwards`, it preserves whether the original argument was an lvalue or rvalue.

## Code

```cpp
{{#include ../../../src/c++11/forwarding-references.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/forwarding-references.cpp).

## Output

```
$ ./src/c++11/build/forwarding-references
Direct calls:
readMemory (lvalue ref): 0x10001000
readMemory (rvalue ref): 0x10002000
Calls via hook wrapper:
Calling readMemory.
readMemory (lvalue ref): 0x10001000
Calling readMemory.
readMemory (rvalue ref): 0x10002000
```
