#include <array>
#include <memory>

constexpr bool isValidMagic(uint32_t magic) {
  auto valid = std::make_unique<uint32_t[]>(2);

  // https://en.wikipedia.org/wiki/Mach-O
  valid[0] = 0xFEEDFACF;
  valid[1] = 0xFEEDFACE;

  for (int i = 0; i < 2; ++i) {
    if (valid[i] == magic)
      return true;
  }
  return false;
}

int main() {
  static_assert(isValidMagic(0xFEEDFACF), "Invalid magic.");
  return 0;
}