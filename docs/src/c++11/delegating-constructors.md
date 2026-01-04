# Delegating constructors

## Use case

Constructors with default values that reuse common initialization.

## Explanation

Delegating constructors let one constructor call another using the initializer list syntax `: ConstructorName(args)`. This helps to avoid duplicating initialization code (all paths go through the primary constructor).

## Code

```cpp
{{#include ../../../src/c++11/delegating-constructors.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/delegating-constructors.cpp).

## Output

```
$ ./src/c++11/build/delegating-constructors
Created: __DATA - 0x1000 - 0x100
Created: __TEXT - 0x2000 - 0x200
```
