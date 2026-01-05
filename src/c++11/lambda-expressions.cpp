#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

struct Symbol {
  uint64_t address;
  std::string name;
  bool exported;
};

int main() {
  std::vector<Symbol> symbols = {{0x1000, "_main", true},
                                 {0x1100, "_private_helper", false},
                                 {0x1200, "_public_api", true}};

  auto isExported = [](const Symbol &s) { return s.exported; };

  uint64_t searchStart = 0x1100;
  uint64_t searchEnd = 0x1250;
  auto inRange = [searchStart, searchEnd](const Symbol &s) {
    return s.address >= searchStart && s.address < searchEnd;
  };

  std::cout << "Exported symbols:\n";
  for (const auto &s : symbols) {
    if (isExported(s)) {
      std::cout << "  0x" << std::hex << s.address << " " << s.name << "\n";
    }
  }

  std::cout << "Symbols in range:\n";
  auto count = std::count_if(symbols.begin(), symbols.end(), inRange);
  std::cout << "  Found " << count << " symbols.\n";

  return 0;
}