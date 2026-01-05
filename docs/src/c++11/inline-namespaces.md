# Inline namespaces

## Use case

API versioning with default version.

## Explanation

`inline namespace` makes its contents accessible from the parent namespace. `Analyzer::run()` calls `V2::run()` because V2 is marked `inline`. Old code can still explicitly use `V1`.

## Code

```cpp
{{#include ../../../src/c++11/inline-namespaces.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/inline-namespaces.cpp).

## Output

```
$ ./src/c++11/build/inline-namespaces
V2
V1
V2
```
