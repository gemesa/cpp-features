# Direct-list-initialization of enums

## Use case

Initialize scoped enum from raw value (without cast).

## Explanation

Scoped enums can now be initialized with braces from their underlying type.

## Code

```cpp
{{#include ../../../src/c++17/direct-list-initialization-of-enums.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/direct-list-initialization-of-enums.cpp).

## Output

```
$ ./src/c++17/build/direct-list-initialization-of-enums
Filetype: 0x2
```
