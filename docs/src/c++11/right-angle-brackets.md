# Right angle brackets

## Use case

Nested templates without extra spaces.

## Explanation

Before C++11, `>>` in nested templates was parsed as right-shift operator, requiring a space (`vector<int> >`).

## Code

```cpp
{{#include ../../../src/c++11/right-angle-brackets.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/right-angle-brackets.cpp).

## Output

```
$ ./src/c++11/build/right-angle-brackets
0x1000 : 2 items.
0x2000 : 1 items.
```
