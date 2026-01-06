#include <cstdint>
#include <iostream>
#include <type_traits>

template <typename T> void printAddr(T addr) {
  if constexpr (sizeof(T) == 8) {
    std::cout << "64-bit: 0x" << std::hex << addr << "\n";
  } else {
    std::cout << "32-bit: 0x" << std::hex << addr << "\n";
  }
}

int main() {
  printAddr(uint64_t{0x10001000});
  printAddr(uint32_t{0x1000});
  return 0;
}