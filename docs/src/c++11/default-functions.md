# Default functions

## Use case

Explicitly request compiler-generated special member functions (constructors, assignment operators and destructors). We implement a custom destructor for logging.

## Explanation

The destructor is only for logging but defining it suppresses move generation. `= default` request all operations back. Since `std::vector` handles deep copy and move correctly, default operations are fine. According to the [rule of 5](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c21-if-you-define-or-delete-any-copy-move-or-destructor-function-define-or-delete-them-all), we implement all.

## Code

```cpp
{{#include ../../../src/c++11/default-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/default-functions.cpp).

## Output

```
$ ./src/c++11/build/default-functions
a: 0, b: 2, c:2
Cleanup: 2 instructions.
Cleanup: 2 instructions.
Cleanup: 0 instructions.
```
