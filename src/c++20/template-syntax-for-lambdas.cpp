#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  auto analyze = []<typename T>(const std::vector<T> &data) {
    std::cout << "Element size: " << sizeof(T) << " bytes.\n";
    for (const auto &addr : data) {
      std::cout << "Analyzing 0x" << std::hex << addr << ".\n";
    }
  };

  std::vector<uint64_t> addrs{0x10001000, 0x10002000};
  analyze(addrs);

  return 0;
}