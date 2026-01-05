#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>

int main() {
  std::array<uint8_t, 4> bytes = {
      // $ echo "stp x29, x30, [sp, #-16]\!" | llvm-mc -triple=aarch64 -show-encoding
      // stp	x29, x30, [sp, #-16]!           // encoding: [0xfd,0x7b,0xbf,0xa9]
      0xFD, 0x7B, 0xBF, 0xA9};

  std::cout << "Size: " << bytes.size() << "\n";
  std::cout << "First: 0x" << std::hex << static_cast<int>(bytes.at(0)) << "\n";
  std::cout << "Last: 0x" << std::hex << static_cast<int>(bytes[3]) << "\n";

  return 0;
}