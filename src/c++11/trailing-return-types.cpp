#include <cstdint>
#include <iostream>

template <typename A, typename B> auto add(A a, B b) -> decltype(a + b) {
  return a + b;
}

auto getEntry = []() -> uint64_t { return 0x10001000; };

int main() {
  auto r1 = add(0x1000, 0x100);
  auto r2 = add(0x1000ULL, 0x100ULL);

  std::cout << "r1: 0x" << std::hex << r1 << "\n";
  std::cout << "r2: 0x" << std::hex << r2 << "\n";
  std::cout << "entry: 0x" << std::hex << getEntry() << "\n";

  return 0;
}