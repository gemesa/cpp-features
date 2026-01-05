# Type traits

## Use case

Compile-time checks for safe binary I/O.

## Explanation

Type traits query type properties at compile-time. `is_trivially_copyable` checks if a type is safe for `memcpy` (POD/Plain Old Data structs are but classes with `std::string` are not). `static_assert` can be used to catch mistakes before runtime.

## Code

```cpp
{{#include ../../../src/c++11/type-traits.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/type-traits.cpp).

## Output

```
$ ./src/c++11/build/type-traits
MachHeader trivially copyable: true
Symbol trivially copyable: false
```
