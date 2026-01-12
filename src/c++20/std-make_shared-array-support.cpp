#include <cstdint>
#include <iostream>
#include <memory>

int main() {
  auto buffer = std::make_shared<uint8_t[]>(0x1000);

  // https://en.wikipedia.org/wiki/Mach-O
  buffer[0] = 0xCF;
  buffer[1] = 0xFA;
  buffer[2] = 0xED;
  buffer[3] = 0xFE;

  std::cout << "Magic: 0x" << std::hex << static_cast<int>(buffer[3])
            << static_cast<int>(buffer[2]) << static_cast<int>(buffer[1])
            << static_cast<int>(buffer[0]) << "\n";

  return 0;
}