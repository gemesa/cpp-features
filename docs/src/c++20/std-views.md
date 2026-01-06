# `std::views`

## Use case

Composable, lazy sequence operations.

## Explanation

Views are lazy, no copies until we iterate. Pipe `|` chains operations. Common views: `filter`, `transform`, `take`, `drop`, `reverse`, `split`, `join`.

## Code

```cpp
{{#include ../../../src/c++20/std-views.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-views.cpp).

## Output

```
$ ./src/c++20/build/std-views
0x0
0x10
0x20
```
