// std::flat_map is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#ifdef __APPLE__
#include <cstdint>
#include <flat_map>
#include <print>
#include <string>

int main() {
  std::flat_map<uint64_t, std::string> symbols;

  // Sorts on insert and shifts elements.
  symbols.emplace(0x10001000, "_main");
  symbols.emplace(0x10002000, "_helper");
  symbols.emplace(0x10003000, "_cleanup");

  // Fast lookup. Uses binary search.
  if (auto it = symbols.find(0x10001000); it != symbols.end()) {
    std::println("{:#x}: {}", it->first, it->second);
  }

  // Iterate over memory sequentially. Best case for CPU cache.
  for (const auto &[addr, name] : symbols) {
    std::println("{:#x}: {}", addr, name);
  }

  return 0;
}
#else
int main() { return 0; }
#endif
