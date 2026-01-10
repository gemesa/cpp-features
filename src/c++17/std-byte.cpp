#include <cstdint>
#include <iostream>

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  // 64-bit: 0xCF (0xFEEDFACF).
  // 32-bit: 0xCE (0xFEEDFACE).
  std::byte magic{0xCF};
  std::byte mask{0x0F};

  std::byte result = magic & mask;

  bool is64 = (result == std::byte{0x0F});

  std::cout << "64-bit: " << std::boolalpha << is64 << "\n";

  return 0;
}