# Converting constructors

## Use case

Implicit conversion from brace-init-list to constructor arguments.

## Explanation

Braces `{}` convert values into constructor arguments. Unlike `()`, braces prevent narrowing conversions (e.g. from `double` to `int`). If a constructor accepts `std::initializer_list`, it takes priority over other constructors when using `{}`.

## Code

```cpp
{{#include ../../../src/c++11/converting-constructors.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/converting-constructors.cpp).

## Output

```
$ ./src/c++11/build/converting-constructors
Two args.
initializer_list
initializer_list
Single arg.
```
