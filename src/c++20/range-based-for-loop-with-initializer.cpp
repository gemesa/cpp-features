#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  for (std::vector<uint64_t> addrs{0x1000, 0x1100, 0x1200}; auto addr : addrs) {
    std::cout << "0x" << std::hex << addr << "\n";
  }
  return 0;
}