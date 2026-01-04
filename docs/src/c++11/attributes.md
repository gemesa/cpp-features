# Attributes

## Use case

Document that a function never returns (might help compiler optimization).

## Explanation

`[[noreturn]]` tells the compiler a function never returns normally (it throws, calls `abort`, loops forever etc.). This mainly serves as documentation and an optimization hint. In practice, modern compilers are already very smart and adding `[[noreturn]]` does not help them.

## Code

```cpp
{{#include ../../../src/c++11/attributes.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/attributes.cpp).

## Output

```
$ ./src/c++11/build/attributes
Entry: 0x10001000
Caught: Invalid magic.
```
