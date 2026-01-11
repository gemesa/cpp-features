# Rounding functions for chrono durations and timepoints

## Use case

Benchmark analysis passes.

## Explanation

`floor` rounds down, `ceil` rounds up, `round` rounds to nearest.

## Code

```cpp
{{#include ../../../src/c++17/rounding-functions-for-chrono-durations-and-timepoints.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/rounding-functions-for-chrono-durations-and-timepoints.cpp).

## Output

```
$ ./src/c++17/build/rounding-functions-for-chrono-durations-and-timepoints
floor: 1s.
ceil: 2s.
round: 2s.
exact: 1503ms.
```
