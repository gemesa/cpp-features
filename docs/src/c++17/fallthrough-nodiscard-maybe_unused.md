# `[[fallthrough]]`, `[[nodiscard]]`, `[[maybe_unused]]` attributes

## Use case

Express intent and catch bugs.

## Explanation

`[[fallthrough]]` documents intentional fallthroughs. `[[nodiscard]]` warns if return value is ignored. `[[maybe_unused]]` suppresses unused warnings.

## Code

```cpp
{{#include ../../../src/c++17/fallthrough-nodiscard-maybe_unused.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/fallthrough-nodiscard-maybe_unused.cpp).

## Output

```
$ ./src/c++17/build/fallthrough-nodiscard-maybe_unused
Magic is valid: true
Analyzing branch.
Recording call.
Analyzing branch.
```
