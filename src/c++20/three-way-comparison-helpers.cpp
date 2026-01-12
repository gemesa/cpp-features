#include <compare>
#include <cstdint>
#include <iostream>

struct Symbol {
  uint64_t addr;
  auto operator<=>(const Symbol &) const = default;
};

int main() {
  Symbol a{0x1000}, b{0x2000}, c{0x1000};

  auto cmp = a <=> b;

  std::cout << std::boolalpha;
  std::cout << "is_lt: " << std::is_lt(cmp) << "\n";
  std::cout << "is_eq: " << std::is_eq(cmp) << "\n";
  std::cout << "is_gt:" << std::is_gt(cmp) << "\n";

  std::cout << "is_eq(a <=> c): " << std::is_eq(a <=> c) << "\n";
  std::cout << "is_lteq(a <=> b): " << std::is_lteq(a <=> b) << "\n";
  std::cout << "is_gteq(b <=> a): " << std::is_gteq(b <=> a) << "\n";

  return 0;
}