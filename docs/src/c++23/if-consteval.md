# `if consteval`

## Use case

Different code paths for compile-time vs runtime.

## Explanation

`if consteval` lets us use different error handling: `throw` at compile-time (causes compile error), `abort()`/`cerr` at runtime. Replaces `if (std::is_constant_evaluated())`.

## Code

```cpp
{{#include ../../../src/c++23/if-consteval.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B23/if-consteval.cpp).

## Output

```
$ ./src/c++23/build/if-consteval
0x94000010, 0x94000010
```
