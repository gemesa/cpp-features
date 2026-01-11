# Deprecate implicit capture of `this`

## Use case

Avoid dangling pointer bugs with lambdas.

## Explanation

`[=]` captures `this` by pointer. Object dies --> dangling pointer. C++20 requires explicit `this` or `*this`.

## Code

```cpp
{{#include ../../../src/c++20/deprecate-implicit-capture-of-this.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/deprecate-implicit-capture-of-this.cpp).

## Output

```
$ ./src/c++20/build/deprecate-implicit-capture-of-this
Base: 0x10000000
Base: 0x10000000
```
