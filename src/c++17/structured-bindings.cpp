#include <cstdint>
#include <iostream>
#include <map>

struct Symbol {
  bool found;
  uint64_t addr;
  const char *name;
};

Symbol findSymbol(const char *name) { return {true, 0x10001000, "_main"}; }

int main() {
  auto [found, addr, name] = findSymbol("_main");
  std::cout << name << " @ 0x" << std::hex << addr << "\n";

  std::map<uint64_t, const char *> symbols{{0x10001000, "_main"},
                                           {0x10002000, "_helper"}};

  for (const auto &[addr, name] : symbols) {
    std::cout << name << " @ 0x" << std::hex << addr << "\n";
  }

  return 0;
}