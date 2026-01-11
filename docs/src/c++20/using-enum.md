# `using enum`

## Use case

Import enum values into scope.

## Explanation

`using enum` brings all enum values into scope. No more `LoadCommand::` prefix inside switch.

## Code

```cpp
{{#include ../../../src/c++20/using-enum.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/using-enum.cpp).

## Output

```
$ ./src/c++20/build/using-enum
LC_SEGMENT_64
```
