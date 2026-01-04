#include <iostream>

struct Section {
  uint64_t addr;
  size_t size;
  const char *name;

  // Primary constructor.
  Section(uint64_t a, size_t s, const char *n) : addr(a), size(s), name(n) {
    std::cout << "Created: " << name << " - 0x" << std::hex << addr << " - 0x"
              << std::hex << size << "\n";
  }

  // Delegate (default name).
  Section(uint64_t a, size_t s) : Section(a, s, "__TEXT") {}
};

int main() {
  Section a(0x1000, 0x100, "__DATA");
  Section b(0x2000, 0x200);

  return 0;
}