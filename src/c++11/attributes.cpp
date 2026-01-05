#include <cstdint>
#include <iostream>

[[noreturn]] void throwError(const char *msg) { throw std::runtime_error(msg); }

uint64_t getEntryPoint(uint32_t magic) {
  // https://en.wikipedia.org/wiki/Mach-O
  if (magic == 0xFEEDFACF) {
    return 0x10001000;
  }

  throwError("Invalid magic.");
}

int main() {

  try {
    uint64_t entry = getEntryPoint(0xFEEDFACF);
    std::cout << "Entry: 0x" << std::hex << entry << "\n";
    entry = getEntryPoint(0xDEADBEEF);
    std::cout << "Entry: 0x" << std::hex << entry << "\n";
  } catch (const std::exception &e) {
    std::cout << "Caught: " << e.what() << "\n";
  }

  return 0;
}