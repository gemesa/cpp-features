# Rvalue references

## Use case

Accept temporary disassembly results without copying.

## Explanation

The key line is `cache_ = std::move(instrs)`. Inside the function, `instrs` is an lvalue, so we need `std::move`. The rvalue reference parameter (`&&`) only controls what can be passed in, it does not automatically move.

## Code

```cpp
{{#include ../../../src/c++11/rvalue-references.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/rvalue-references.cpp).

## Output

```
$ ./src/c++11/build/rvalue-references
Move assignment.
Cached 1 instructions.
Move assignment.
Cached 1 instructions.
```
