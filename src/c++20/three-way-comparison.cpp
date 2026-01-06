#include <compare>
#include <cstdint>
#include <iostream>

struct Symbol {
  uint64_t addr;
  const char *name;

  auto operator<=>(const Symbol &) const = default;
};

int main() {
  Symbol main{0x10001000, "_main"};
  Symbol helper{0x10002000, "_helper"};

  std::cout << std::boolalpha;
  std::cout << "main < helper: " << (main < helper) << "\n";
  std::cout << "main == helper: " << (main == helper) << "\n";

  return 0;
}