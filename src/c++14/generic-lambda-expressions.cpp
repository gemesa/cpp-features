#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  auto hexPrint = [](auto val) {
    std::cout << "0x" << std::hex << val << "\n";
  };

  // unsigned long = uint64_t
  hexPrint(0x10001000UL);
  // unsigned int = uint32_t
  hexPrint(0xFEEDFACF);

  return 0;
}