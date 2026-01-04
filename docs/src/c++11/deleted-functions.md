# Deleted functions

## Use case

Prevent copying of resources that cannot be safely duplicated.

## Explanation

`= delete` disables a function entirely. Copying is deleted here because `unique_ptr` cannot be copied. Attempting to copy gives a compile error. Move is still allowed since it transfers ownership safely. According to the [rule of 5](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c21-if-you-define-or-delete-any-copy-move-or-destructor-function-define-or-delete-them-all), we implement all.

## Code

```cpp
{{#include ../../../src/c++11/deleted-functions.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/deleted-functions.cpp).

## Output

```
$ ./src/c++11/build/deleted-functions
Allocated 1024 bytes.
Freed 1024 bytes.
Freed 0 bytes.
```
