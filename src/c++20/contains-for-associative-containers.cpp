#include <cstdint>
#include <iostream>
#include <map>
#include <set>

int main() {
  std::map<uint64_t, const char *> symbols{{0x10001000, "_main"},
                                           {0x10002000, "_helper"}};

  std::set<uint64_t> breakpoints{0x10001000, 0x10002000};

  uint64_t addr = 0x10001000;

  if (symbols.contains(addr)) {
    std::cout << "Symbol found: " << symbols[addr] << "\n";
  }

  if (breakpoints.contains(addr)) {
    std::cout << "Breakpoint hit!\n";
  }

  return 0;
}