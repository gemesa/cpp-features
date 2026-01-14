# `std::views::zip`

## Use case

Iterate multiple ranges together.

## Explanation

`std::views::zip` combines multiple ranges into tuples. Iterates in ["lockstep"](https://stackoverflow.com/questions/22260322/what-does-lockstep-mean-in-programming). Stops at shortest range.

## Code

```cpp
{{#include ../../../src/c++23/std-views-zip.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-views-zip.cpp).

## Output

```
$ ./src/c++23/build/std-views-zip
0x1000: _main (size: 0x100)
0x1100: _helper (size: 0x50)
0x1200: _exit (size: 0x50)
```
