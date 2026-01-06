#include <cstdint>
#include <iostream>
#include <ranges>
#include <vector>

int main() {
  std::vector<uint64_t> addresses{0x1000, 0x1010, 0x2000, 0x1020, 0x3000};

  auto view = addresses |
              std::views::filter([](auto a) { return a < 0x2000; }) |
              std::views::transform([](auto a) { return a - 0x1000; });

  for (auto addr : view) {
    std::cout << "0x" << std::hex << addr << "\n";
  }
  return 0;
}