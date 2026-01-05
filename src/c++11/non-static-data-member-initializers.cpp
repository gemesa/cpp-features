#include <cstdint>
#include <iostream>

// Before C++11.
struct SectionOld {
  uint64_t addr;
  uint64_t size;
  SectionOld() : addr(0), size(0x1000) {}
};

// C++11.
struct Section {
  uint64_t addr = 0;
  uint64_t size = 0x1000;
};

int main() {
  Section s1;
  std::cout << "addr: 0x" << std::hex << s1.addr << ", size: 0x" << std::hex
            << s1.size << "\n";
  return 0;
}