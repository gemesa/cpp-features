#include <array>
#include <bit>
#include <cstdint>
#include <iostream>

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  std::array<uint8_t, 4> bytes = {0xCF, 0xFA, 0xED, 0xFE};

  uint32_t magic = std::bit_cast<uint32_t>(bytes);

  std::cout << "Magic: 0x" << std::hex << magic << "\n";

  return 0;
}