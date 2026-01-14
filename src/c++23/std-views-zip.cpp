#include <cstdint>
#include <print>
#include <ranges>
#include <string>
#include <vector>

int main() {
  std::vector<uint64_t> addresses = {0x1000, 0x1100, 0x1200};
  std::vector<std::string> names = {"_main", "_helper", "_exit"};
  std::vector<size_t> sizes = {0x100, 0x50, 0x50};

  for (auto [addr, name, size] : std::views::zip(addresses, names, sizes)) {
    std::println("{:#x}: {} (size: {:#x})", addr, name, size);
  }

  return 0;
}