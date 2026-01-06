#include <concepts>
#include <cstdint>
#include <iostream>
#include <type_traits>

template <typename T>
concept Unsigned = std::is_unsigned_v<T>;

template <Unsigned T> void printHex(T value) {
  std::cout << "0x" << std::hex << value << "\n";
}

int main() {
  uint64_t addr = 0x10001000;
  printHex(addr);

  /*
    concepts.cpp:x:x: error: no matching function for call to
        'printHex'
     xx |   printHex(-1);
        |   ^~~~~~~~
    concepts.cpp:x:x: note: candidate template ignored: constraints
        not satisfied [with T = int]
      x | template <Unsigned T> void printHex(T value) {
        |                            ^
    concepts.cpp:x:x: note: because 'int' does not satisfy 'Unsigned'
      x | template <Unsigned T> void printHex(T value) {
        |           ^
    concepts.cpp:x:x: note: because 'std::is_unsigned_v<int>'
        evaluated to false
      x | concept Unsigned = std::is_unsigned_v<T>;
        |                    ^
    1 error generated.
  */
  // printHex(-1);

  return 0;
}