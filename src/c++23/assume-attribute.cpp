#include <cstdint>
#include <print>

// https://en.wikipedia.org/wiki/Mach-O
bool is64Bit(uint32_t magic) {
  [[assume(magic == 0xFEEDFACE || magic == 0xFEEDFACF)]];
  return magic == 0xFEEDFACF;
}

int main() {
  uint32_t magic = 0xFEEDFACF;
  std::println("64-bit: {}", is64Bit(magic));
  return 0;
}