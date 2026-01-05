#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

int main() {
  std::unordered_map<uint64_t, const char *> symbols;
  symbols.emplace(0x10001000, "_main");

  auto it = symbols.find(0x10001000);
  if (it != symbols.end()) {
    std::cout << "Found: " << it->second << "\n";
  }

  std::unordered_set<uint64_t> visited;
  visited.insert(0x10001000);
  // Duplicate ignored.
  visited.insert(0x10001000);

  std::cout << "Visited: " << visited.size() << " unique addresses.\n";

  return 0;
}