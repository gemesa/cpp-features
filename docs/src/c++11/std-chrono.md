# `std::chrono`

## Use case

Bechmark analysis operations.

## Explanation

`std::chrono` provides type-safe time handling. Get the current time with `now()`, subtract to get duration and cast to desired units with `duration_cast`. Use `high_resolution_clock` for benchmarking.

## Code

```cpp
{{#include ../../../src/c++11/std-chrono.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-chrono.cpp).

## Output

```
$ ./src/c++11/build/std-chrono
Elapsed: 2 ms (2883 us).
```
