#include <cstdint>
#include <functional>
#include <iostream>

struct Analyzer {
  uint64_t base = 0x10000000;
  uint64_t getBase() { return base; }
};

int main() {
  auto toOffset = [](uint64_t addr, uint64_t base) { return addr - base; };

  std::cout << "Offset: 0x" << std::hex
            << std::invoke(toOffset, 0x10001000, 0x10000000) << "\n";

  Analyzer a;
  std::cout << "Base: 0x" << std::hex << std::invoke(&Analyzer::getBase, a)
            << "\n";

  return 0;
}