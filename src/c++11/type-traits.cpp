#include <cstdint>
#include <iostream>
#include <type_traits>

// https://en.wikipedia.org/wiki/Mach-O
struct MachHeader {
  uint32_t magic;
  uint32_t cputype;
};

class Symbol {
  std::string name;

public:
  Symbol(const std::string &n) : name(n) {}
};

int main() {
  std::cout << "MachHeader trivially copyable: " << std::boolalpha
            << std::is_trivially_copyable<MachHeader>::value << "\n";
  std::cout << "Symbol trivially copyable: " << std::boolalpha
            << std::is_trivially_copyable<Symbol>::value << "\n";

  static_assert(std::is_trivially_copyable<MachHeader>::value,
                "MachHeader must be safe for memcpy.");
  return 0;
}