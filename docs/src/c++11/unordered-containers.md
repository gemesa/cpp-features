# Unordered containers

## Use case

O(1) symbol lookups by address.

## Explanation

`unordered_map` and `unordered_set` use hash tybles for O(1) average lookup, insert and delete. Might be faster that `map`/`set` (which are O(log n)) but unordered. 

## Code

```cpp
{{#include ../../../src/c++11/unordered-containers.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/unordered-containers.cpp).

## Output

```
$ ./src/c++11/build/unordered-containers
Found: _main
Visited: 1 unique addresses.
```
