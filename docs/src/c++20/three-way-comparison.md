# Three-way comparison (spaceship operator)

## Use case

Auto-generate all comparison operators.

## Explanation

`<=>` with `= default` generates all comparison operators from member-wise comparison (comparing each member in order, one by one).

## Code

```cpp
{{#include ../../../src/c++20/three-way-comparison.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/three-way-comparison.cpp).

## Output

```
$ ./src/c++20/build/three-way-comparison
main < helper: true
main == helper: false
```
