# Folding expressions

## Use case

Variadic logging or combining flags.

## Explanation

Fold expressions expand parameter packs over an operator. Unary fold has one operator (`(pack | ...)`). Binary fold has two operators plus an init value (`(init << .., << pack)`).

## Code

```cpp
{{#include ../../../src/c++17/folding-expressions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/folding-expressions.cpp).

## Output

```
$ ./src/c++17/build/folding-expressions
Entry: 0x10001000
Flags: 0x20080
```
