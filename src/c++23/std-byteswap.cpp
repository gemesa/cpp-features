#include <bit>
#include <cstdint>
#include <print>

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  uint32_t beMagic = 0xFEEDFACF;

  uint32_t leMagic = std::byteswap(beMagic);

  std::println("BE: {:#x}", beMagic);
  std::println("LE: {:#x}", leMagic);

  return 0;
}