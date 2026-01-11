#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<uint64_t> segmentSizes{0x1234, 0x2345, 0x3456};
  auto rawTotal = std::reduce(segmentSizes.begin(), segmentSizes.end());
  std::cout << "Raw total: 0x" << std::hex << rawTotal << "\n";

  // Count total 4k pages needed.
  // Adding 0xFFF (page size - 1) before dividing rounds up.
  // (0x1234 + 0xFFF) / 0x1000 = 0x2233 / 0x1000 = 2 pages.
  auto totalPages = std::transform_reduce(
      segmentSizes.begin(), segmentSizes.end(), uint64_t{0}, std::plus{},
      [](uint64_t size) { return (size + 0xFFF) / 0x1000; });

  std::cout << "Pages needed: " << std::dec << totalPages << "\n";

  return 0;
}