#include <iostream>

#if __has_include(<mach-o/loader.h>)
#define BINARY_FORMAT "Mach-O (macOS/iOS)"
#elif __has_include(<elf.h>)
#define BINARY_FORMAT "ELF (Linux)"
#else
#define BINARY_FORMAT "unknown"
#endif

int main() {
  std::cout << "Binary format: " << BINARY_FORMAT << "\n";
  return 0;
}