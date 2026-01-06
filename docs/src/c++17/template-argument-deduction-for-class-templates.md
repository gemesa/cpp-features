# Template argument deduction for class templates

## Use case

Simpler container initialization.

## Explanation

Class template arguments can now be deduced from constructor arguments, similarly to function templates.

## Code

```cpp
{{#include ../../../src/c++17/template-argument-deduction-for-class-templates.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/template-argument-deduction-for-class-templates.cpp).

## Output

```
$ ./src/c++17/build/template-argument-deduction-for-class-templates
Buffer size: 4
```
