#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>

template <typename T> void hexDump(const T &data) {
  for (auto it = std::begin(data); it != std::end(data); ++it) {
    std::cout << std::hex << static_cast<int>(*it) << " ";
  }
  std::cout << "\n";
}

int main() {
  // $ echo "stp x29, x30, [sp, #-16]\!" | llvm-mc -triple=aarch64 -show-encoding
  // stp	x29, x30, [sp, #-16]!           // encoding: [0xfd,0x7b,0xbf,0xa9]
  uint8_t cArray[] = {0xFD, 0x7B, 0xBF, 0xA9};
  // $ echo "ret" | llvm-mc -triple=aarch64 -show-encoding
  // ret                                     // encoding: [0xc0,0x03,0x5f,0xd6]
  std::array<uint8_t, 4> stdArray = {0xC0, 0x03, 0x5F, 0xD6};

  hexDump(cArray);
  hexDump(stdArray);

  return 0;
}