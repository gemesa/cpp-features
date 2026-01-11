# `std::gcd` and `std::lcm`

## Use case

Detect cipher block size, find XOR key period.

## Explanation

`std::gcd` and `std::lcm` compute greatest common divisor and least common multiple. GCD of ciphertext lengths suggests the block size. LCM of XOR key lengths reveals when the combined keystream repeats (might be useful for breaking multi-key XOR).

## Code

```cpp
{{#include ../../../src/c++17/std-gcd-std-lcm.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-features/blob/main/src/c%2B%2B17/std-gcd-std-lcm.cpp).

## Output

```
$ ./src/c++17/build/std-gcd-std-lcm
Block size: 16 bytes.
Pattern repeats every 35 bytes.
```
