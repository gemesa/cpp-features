#include <cstdint>
#include <iostream>
#include <tuple>

void printSegment(const char *name, uint64_t addr, uint64_t size) {
  std::cout << name << " @ 0x" << std::hex << addr << " (size: 0x" << size
            << ")\n";
}

int main() {
  auto seg = std::make_tuple("__TEXT", 0x10000000, 0x4000);

  std::apply(printSegment, seg);

  return 0;
}