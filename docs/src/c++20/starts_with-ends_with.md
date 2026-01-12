# `starts_with` and `ends_with` on strings

## Use case

Check string prefixes/suffixes.

## Explanation

Before C++20: `s.find("_OBJC_") == 0` or `s.substr(0, 6) == "_OBJC_`. Now just `s.starts_with("_OBJC_)`.

## Code

```cpp
{{#include ../../../src/c++20/starts_with-ends_with.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B20/starts_with-ends_with.cpp).

## Output

```
$ ./src/c++20/build/starts_with-ends_with
_OBJC_CLASS_$_NSObject: ObjC metadata.
_ZN9org8wikipedia7Article6formatEv: C++ mangled.
-[UIPresentationController runTransitionForCurrentState]_block_invoke: ObjC block.
```
