#include <algorithm>
#include <compare>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  std::vector<uint8_t> magic1 = {0xCF, 0xFA, 0xED, 0xFE};
  std::vector<uint8_t> magic2 = {0xCE, 0xFA, 0xED, 0xFE};
  std::vector<uint8_t> magic3 = {0xCF, 0xFA, 0xED, 0xFE};

  auto cmp12 = std::lexicographical_compare_three_way(
      magic1.begin(), magic1.end(), magic2.begin(), magic2.end());

  auto cmp13 = std::lexicographical_compare_three_way(
      magic1.begin(), magic1.end(), magic3.begin(), magic3.end());

  std::cout << std::boolalpha;

  std::cout << "magic1 > magic2: " << std::is_gt(cmp12) << "\n";
  std::cout << "magic1 == magic3: " << std::is_eq(cmp13) << "\n";

  return 0;
}