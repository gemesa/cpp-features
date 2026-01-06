#include <iostream>
#include <optional>
#include <cstdint>

std::optional<uint64_t> findSymbol(const char *name) {
  if (name[0] == '_') {
    return 0x10001000;
  }
  return std::nullopt;
}

int main() {
  if (auto addr = findSymbol("_main")) {
    std::cout << "Found: 0x" << std::hex << *addr << "\n";
  }

  auto missing = findSymbol("invalid");
  std::cout << "Default: 0x" << missing.value_or(0) << "\n";
  return 0;
}