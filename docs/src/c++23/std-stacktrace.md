# `std::stacktrace`

## Use case

Capture callstack for debugging/logging.

## Explanation

`std::stacktrace::current()` captures the call stack.

## Code

```cpp
{{#include ../../../src/c++23/std-stacktrace.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/std-stacktrace.cpp).

## Output

```
$ ./src/c++23/build/std-stacktrace
Analyzing 0x10001000
Callstack:
   0# analyzeFunction(unsigned long) at :0
   1# processSection(std::basic_string_view<char, std::char_traits<char> >) at :0
   2# main at :0
   3# __libc_start_call_main at ../sysdeps/nptl/libc_start_call_main.h:58
   4# __libc_start_main_impl at ../csu/libc-start.c:360
   5# _start at :0
   6#
```
