#include <cstdint>
#include <iostream>
#include <type_traits>

// https://en.wikipedia.org/wiki/Mach-O
constexpr bool isMachO(uint32_t magic) {
  if (std::is_constant_evaluated()) {
    return magic == 0xFEEDFACF || magic == 0xFEEDFACE;
  } else {
    std::cout << "Checking magic at runtime.\n";
    return magic == 0xFEEDFACF || magic == 0xFEEDFACE;
  }
}

int main() {
  constexpr bool a = isMachO(0xFEEDFACF);
  bool b = isMachO(0xFEEDFACF);

  std::cout << "a: " << std::boolalpha << a << ", b: " << b << "\n";

  return 0;
}