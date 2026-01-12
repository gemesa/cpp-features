#include <cstdint>
#include <iostream>
#include <numeric>

int main() {
  uint64_t start = 0x10000000;
  uint64_t end = 0x10001000;

  uint64_t mid = std::midpoint(start, end);

  std::cout << "Range: 0x" << std::hex << start << " - 0x" << end << "\n";
  std::cout << "Midpoint: 0x" << mid << "\n";
  return 0;
}