# Deducing `this`

## Use case

Avoid duplicating const/non-const member function overloads.

## Explanation

`this Self&& self` makes the object parameter explicit. Compiler deduces const/ref qualifiers automatically. Eliminates boilerplate overloads.

## Code

```cpp
{{#include ../../../src/c++23/deducing-this.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/deducing-this.cpp).

## Output

```
$ ./src/c++23/build/deducing-this
0xcf
```
