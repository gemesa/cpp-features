#include <cstdint>
#include <iostream>

// https://en.wikipedia.org/wiki/Mach-O
enum class MHFileType : uint32_t {};

int main() {
  MHFileType exe{0x2};

  std::cout << "Filetype: 0x" << std::hex << static_cast<uint32_t>(exe) << "\n";

  return 0;
}