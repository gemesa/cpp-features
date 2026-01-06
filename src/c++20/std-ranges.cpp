#include <algorithm>
#include <cstdint>
#include <iostream>
#include <ranges>
#include <vector>

struct Symbol {
  uint64_t addr;
  const char *name;
};

int main() {
  std::vector<Symbol> symbols{
      {0x1030, "_helper"}, {0x1000, "_main"}, {0x1020, "_init"}};

  std::ranges::sort(symbols, std::less{}, &Symbol::addr);

  for (const auto &s : symbols) {
    std::cout << s.name << " @ 0x" << std::hex << s.addr << "\n";
  }

  return 0;
}
