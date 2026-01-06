#include "macho_constants.hpp"
#include <iostream>

int main() {
  std::cout << "64-bit magic: 0x" << std::hex << MH_MAGIC_64 << "\n";
  return 0;
}