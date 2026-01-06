# Lambda capture initializers

## Use case

Move `unique_ptr` into a lambda for async analysis.

## Explanation

`[x = expr]` initializes a capture with any expression. Enables moving unique_ptr into lambdas and creating computed captures.

## Code

```cpp
{{#include ../../../src/c++14/lambda-capture-initializers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/lambda-capture-initializers.cpp).

## Output

```
$ ./src/c++14/build/lambda-capture-initializers
Original moved: true
Entry: 0x10001000
Size: 16384
```
