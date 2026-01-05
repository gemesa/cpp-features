# Non-static data member initializers

## Use case

Default values for struct members.

## Explanation

Before C++11, defaults had to be set in every constructors. Now we can initialize members at declaration.

## Code

```cpp
{{#include ../../../src/c++11/non-static-data-member-initializers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/non-static-data-member-initializers.cpp).

## Output

```
$ ./src/c++11/build/non-static-data-member-initializers
addr: 0x0, size: 0x1000
```
