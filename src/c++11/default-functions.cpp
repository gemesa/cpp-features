#include <iostream>

struct Section {
  uint64_t addr;
  uint64_t size;

  Section() = default;
  Section(uint64_t a, uint64_t s) : addr(a), size(s) {}

  // Copy constructor.
  Section(const Section &) = default;
  // Copy assignment.
  Section &operator=(const Section &) = default;
};

int main() {
  // Default constructor.
  Section a;
  // Custom constructor.
  Section b(0x1000, 0x100);
  // Copy constructor.
  Section c = b;
  // Copy assignment.
  a = b;

  std::cout << "a.addr: 0x" << std::hex << a.addr << "\n";
  std::cout << "b.addr: 0x" << std::hex << b.addr << "\n";
  std::cout << "c.addr: 0x" << std::hex << c.addr << "\n";

  return 0;
}