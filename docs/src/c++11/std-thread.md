# `std::thread`

## Use case

Parallel analysis of binary segments.

## Explanation

`std::thread` runs a function in a new thread. Pass the function and its arguments to the constructor. Call `join()` to wait for completion. Use `std::mutex` with `std::lock_guard` to prevent mixed output.

## Code

```cpp
{{#include ../../../src/c++11/std-thread.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-thread.cpp).

## Output

```
$ ./src/c++11/build/std-thread
Thread 0x16f573000 analyzing __TEXT
Thread 0x16f5ff000 analyzing __DATA
Done.
```
