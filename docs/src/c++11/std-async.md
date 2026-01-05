# `std::async`

## Use case

Run analysis tasks in parallel and collect the results.

## Explanation

`std::async` runs a function asynchronously and returns a `std::future`. We can call `.get()` to wait for and retrieve the result. (Use `std::launch::async` to force a new thread and `std::launch::deferred` for lazy evaluation.)

## Code

```cpp
{{#include ../../../src/c++11/std-async.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/std-async.cpp).

## Output

```
$ ./src/c++11/build/std-async
Analyzing __TEXT
Analyzing __DATA
Results: 100, 100
```
