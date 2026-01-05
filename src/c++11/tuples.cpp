#include <cstdint>
#include <iostream>
#include <tuple>

std::tuple<bool, uint64_t, const char *> findEntry() {
  return std::make_tuple(true, 0x10001000, "_main");
}

int main() {
  auto result = findEntry();
  std::cout << "Found: " << std::boolalpha << std::get<0>(result) << "\n";
  std::cout << "Entry: 0x" << std::hex << std::get<1>(result) << "\n";
  std::cout << "Symbol: " << std::get<2>(result) << "\n";
  return 0;
}