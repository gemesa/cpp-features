#include <bit>
#include <cstdint>
#include <iostream>

int main() {
  uint32_t flags = 0b1010'0000'0000'0000'0000'0000'1000'0000;
  // https://en.cppreference.com/w/cpp/header/bit.html
  std::cout << "popcount: " << std::popcount(flags) << "\n";
  std::cout << "has_single_bit: " << std::has_single_bit(flags) << "\n";
  std::cout << "countl_zero: " << std::countl_zero(flags) << "\n";
  std::cout << "countr_zero: " << std::countr_zero(flags) << "\n";
  std::cout << "bit_width: " << std::bit_width(flags) << "\n";

  return 0;
}