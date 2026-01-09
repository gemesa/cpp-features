# Lambda capture `this` by value

## Use case

Safe callbacks that outlive the object.

## Explanation

`[*this]` captures a copy of the object. Safe even after the original object is destroyed.

## Code

```cpp
{{#include ../../../src/c++17/lambda-capture-this-by-value.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/lambda-capture-this-by-value.cpp).

## Output

```
$ ./src/c++17/build/lambda-capture-this-by-value
Base: 0x10000000
```
