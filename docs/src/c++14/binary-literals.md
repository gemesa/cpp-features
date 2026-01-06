# Binary literals

## Use case

Define ARM64 instruction masks and opcodes clearly.

## Explanation

Binary literals (`0b...`) make bit patterns readable. `'` can be used as a separator.

## Code

```cpp
{{#include ../../../src/c++14/binary-literals.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/binary-literals.cpp).

## Output

```
$ ./src/c++14/build/binary-literals
Is BL: true
```
