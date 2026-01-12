# Synchronized buffered outputstream

## Use case

Thread-safe logging without mixed output.

## Explanation

`std::osyncstream` buffers output and flushes atomically. Without it, concurrent `cout` writes mix randomly. Note that it is [not supported by Apple](https://en.cppreference.com/w/cpp/compiler_support/20) currently (look for "Synchronized buffered").

## Code

```cpp
{{#include ../../../src/c++20/synchronised-buffered-outputstream.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/synchronised-buffered-outputstream.cpp).

## Output

```
$ ./src/c++20/build/synchronised-buffered-outputstream
Thread 139842723919552: analyzing __TEXT @ 0x10001000
Thread 139842715526848: analyzing __DATA @ 0x10002000
Thread 139842707134144: analyzing __LINKEDIT @ 0x10003000
```
