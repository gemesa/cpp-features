# Smart pointers

## Use case

Automatic memory management for parsed binary structures.

## Explanation

`unique_ptr` has exclusive ownership (cannot copy, only move). `shared_ptr` allows multiple owners with reference counting. A `shared_ptr` holds the managed object and a reference counter. Accessing the reference counter is thread safe but manipulating the managed object is not thread-safe. Both auto-delete when the last owner goes out of scope (no manual `delete` needed). 

## Code

```cpp
{{#include ../../../src/c++11/smart-pointers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/smart-pointers.cpp).

## Output

```
$ ./src/c++11/build/smart-pointers
unique_ptr
  Created.
  Destroyed.
shared_ptr
  Created.
  Owners: 2
  Destroyed.
```
