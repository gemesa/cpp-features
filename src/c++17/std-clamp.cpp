#include <algorithm>
#include <cstdint>
#include <iostream>

int main() {
  uint64_t offset = 0x5000;
  uint64_t minOff = 0x1000;
  uint64_t maxOff = 0x4000;

  auto bounded = std::clamp(offset, minOff, maxOff);

  std::cout << "Clamped: 0x" << std::hex << bounded << "\n";

  return 0;
}