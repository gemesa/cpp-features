#include <iostream>
#include <map>

using Address = uint64_t;
using Name = std::string;
using SymbolTable = std::map<Address, Name>;

int main() {
  SymbolTable symbols;
  // https://stackoverflow.com/questions/14788261/c-stdvector-emplace-vs-insert
  symbols.emplace(0x10001000, "_main");
  symbols.emplace(0x10002000, "_helper");

  std::cout << "Symbols:\n";
  for (const auto &s : symbols) {
    std::cout << "0x" << std::hex << s.first << ":" << s.second << "\n";
  }

  return 0;
}