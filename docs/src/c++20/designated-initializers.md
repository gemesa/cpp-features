# Designated initializers

## Use case

Initialize structs by field name for clarity.

## Explanation

Name fields explicitly. Order must match declaration. Unspecified fields are zero-initialized.

## Code

```cpp
{{#include ../../../src/c++20/designated-initializers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/designated-initializers.cpp).

## Output

```
$ ./src/c++20/build/designated-initializers
Magic: 0xfeedfacf
Num of cmds: 0
```
