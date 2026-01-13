#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<size_t> sectionSizes = {0x1000, 0x2000, 0x500, 0x800};

  auto total = std::ranges::fold_left(sectionSizes, 0uz, std::plus{});

  std::println("Total size: {:#x}", total);

  // https://en.wikipedia.org/wiki/Mach-O
  std::vector<uint8_t> data = {0xCF, 0xFA, 0xED, 0xFE};

  auto checksum = std::ranges::fold_left(data, uint8_t{0}, std::bit_xor{});

  std::println("Checksum: {:#x}", checksum);

  return 0;
}