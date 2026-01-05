#include <cstdint>
#include <iostream>
#include <vector>

int main() {

  std::vector<uint64_t> addresses = {0x1000, 0x1100, 0x1200};

  std::cout << "Addresses:\n";
  for (const auto &addr : addresses) {
    std::cout << "0x" << std::hex << addr << "\n";
  }

  for (auto &addr : addresses) {
    // Apply ASLR slide/offset.
    addr += 0x10000000;
  }

  std::cout << "After slide/offset:\n";
  for (const auto &addr : addresses) {
    std::cout << "0x" << std::hex << addr << "\n";
  }

  return 0;
}