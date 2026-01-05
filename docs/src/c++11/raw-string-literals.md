# Raw string literals

## Use case

Avoid escape hell in byte patterns.

## Explanation

`R"()"` is a raw string (no escape sequences processed). Essential for regex patterns, YARA rules and byte signatures.

## Code

```cpp
{{#include ../../../src/c++11/raw-string-literals.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B11/raw-string-literals.cpp).

## Output

```
$ ./src/c++11/build/raw-string-literals
Escaped: \xFD\x7B\xBF\xA9
Raw:     \xFD\x7B\xBF\xA9

rule MachO {
    strings: $magic = { CE FA ED FE }
}
```
