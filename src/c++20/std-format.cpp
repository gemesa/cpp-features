#include <cstdint>
#include <format>
#include <iostream>

int main() {
  uint64_t addr = 0x10001000;
  const char *name = "_main";

  std::string s = std::format("Symbol '{}' at {:#x}", name, addr);

  std::cout << s << "\n";

  return 0;
}