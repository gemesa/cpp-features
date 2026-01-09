#include <iostream>

int main() {
  // C++17: deduces int.
  auto addr0{0x1000};

  // Before C+17: it would deduce std::initializer_list<int>
  // auto {42};

  // std::initializer_list still works with =.
  auto addr1 = {0x1100, 0x1200, 0x1300};

  std::cout << "addr0: 0x" << std::hex << addr0 << "\n";
  std::cout << "addr1.size: " << addr1.size() << "\n";

  return 0;
}