# Move semantics

## Use case

Efficiently transfer ownership of large binary buffers when parsing Mach-O segments.

## Explanation

When analyzing large binaries, we do not want to copy megabytes of data. Move semantics lets us transfer ownership of buffers efficiently. The new owner steals the pointer, leaving the old object empty.

## Code

```cpp
{{#include ../../../src/c++11/move-semantics.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/move-semantics.cpp).

## Output

```
$ ./src/c++11/build/move-semantics 
Loading segment.
Constructed segment: __TEXT (1048576 bytes).
Transferring to analyzer.
Moved segment.
Original segment name: 
Analyzer segment name: __TEXT
```
