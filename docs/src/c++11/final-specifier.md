# Final specifier

## Use case

Prevent overriding of security-critical methods.

## Explanation

`final` on a method prevents derived classes from overriding it. `final` on a class prevents inheritance entirely.

## Code

```cpp
{{#include ../../../src/c++11/final-specifier.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/final-specifier.cpp).

## Output

```
$ ./src/c++11/build/final-specifier
Valid: true
```
