#include <cstdint>
#include <iostream>
#include <map>

int main() {
  std::map<uint64_t, const char *> symbols{{0x10001000, "_main"}};

  if (auto it = symbols.find(0x10001000); it != symbols.end()) {
    std::cout << "Found: " << it->second << "\n";
  }

  return 0;
}