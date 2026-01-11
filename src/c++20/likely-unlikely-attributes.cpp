#include <cstdint>
#include <iostream>

// https://en.wikipedia.org/wiki/Mach-O
bool isMachO(const uint8_t *data) {
  uint32_t magic = *reinterpret_cast<const uint32_t *>(data);

  if (magic == 0xFEEDFACF) [[likely]] {
    return true;
  } else if (magic == 0xFEEDFACE) [[unlikely]] {
    return true;
  }
  return false;
}

int main() {
  uint8_t data[] = {0xCF, 0xFA, 0xED, 0xFE};
  std::cout << "Is Mach-O: " << std::boolalpha << isMachO(data) << "\n";
  return 0;
}