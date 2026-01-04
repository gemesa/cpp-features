#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<uint64_t, std::string> symbols = {{0x10001000, "_main"},
                                             {0x10002000, "_helper"}};

  auto findSymbol = [&](uint64_t addr) -> std::string {
    // std::__1::map<uint64_t, std::__1::string>::iterator it
    auto it = symbols.find(addr);
    return (it != symbols.end()) ? it->second : "<unknown>";
  };

  std::cout << "Lookup 0x10001000: " << findSymbol(0x10001000) << "\n";
  std::cout << "Lookup 0x20000000: " << findSymbol(0x20000000) << "\n";

  return 0;
}