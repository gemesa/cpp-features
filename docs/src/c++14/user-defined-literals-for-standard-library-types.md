# User-defined literals for standard library types

## Use case

Readable time durations for analysis timeouts.

## Explanation

Some standard library literals: `h`, `s`, `ms`, `us`. Requires `using namespace std::chrono_literals`.

## Code

```cpp
{{#include ../../../src/c++14/user-defined-literals-for-standard-library-types.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/user-defined-literals-for-standard-library-types.cpp).

## Output

```
$ ./src/c++14/build/user-defined-literals-for-standard-library-types
Timeout: 500ms
Timeout: 2000ms
```
