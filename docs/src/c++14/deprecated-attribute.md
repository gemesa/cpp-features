# `[[deprecated]]` attribute

## Use case

Mark old analysis APIs for removal.

## Explanation

`[[deprecated]]` generates compiler warnings when deprecated items are used.

## Code

```cpp
{{#include ../../../src/c++14/deprecated-attribute.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B14/deprecated-attribute.cpp).

## Output

```
$ ./src/c++14/build/deprecated-attribute
New analysis: 0x10001000
```
