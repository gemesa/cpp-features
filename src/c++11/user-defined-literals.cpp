#include <iostream>

constexpr size_t operator""_KB(unsigned long long kb) { return kb * 1024; }

constexpr size_t operator""_MB(unsigned long long mb) {
  return mb * 1024 * 1024;
}

int main() {

  size_t stackSize = 8_MB;
  size_t pageSize = 4_KB;

  std::cout << "Stack size: " << stackSize << " bytes.\n";
  std::cout << "Page size: " << pageSize << " bytes.\n";

  return 0;
}