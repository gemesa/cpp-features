#include <cstdint>
#include <iostream>

constinit uint64_t g_baseAddr = 0x10000000;

int main() {
  std::cout << "Base: 0x" << std::hex << g_baseAddr << "\n";
  return 0;
}