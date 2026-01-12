# `std::lexicographical_compare_three_way`

## Use case

Compare byte sequences with three-way result.

## Explanation

Lexicographical compare = compare element by element until one differs. Returns three-way result (less, equal, greater) instead of just bool. Useful for sorting/comparing binary data.

## Code

```cpp
{{#include ../../../src/c++20/std-lexicographical_compare_three_way.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/std-lexicographical_compare_three_way.cpp).

## Output

```
$ ./src/c++20/build/std-lexicographical_compare_three_way
magic1 > magic2: true
magic1 == magic3: true
```
