#include <cstdint>
#include <iostream>
#include <memory>
#include <vector>

struct AnalysisResult {
  uint64_t entryPoint;
  AnalysisResult(uint64_t e) : entryPoint(e) {}
};

int main() {
  auto result = std::make_unique<AnalysisResult>(0x10001000);

  auto task = [r = std::move(result)]() {
    std::cout << "Entry: 0x" << std::hex << r->entryPoint << "\n";
  };

  std::cout << "Original moved: " << std::boolalpha << (result == nullptr)
            << "\n";

  task();

  int multiplier = 4;
  auto getSize = [pageSize = 4096 * multiplier]() { return pageSize; };

  std::cout << "Size: " << std::dec << getSize() << "\n";

  return 0;
}