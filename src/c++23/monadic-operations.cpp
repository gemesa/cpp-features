#include <cstdint>
#include <optional>
#include <print>
#include <string>

std::optional<uint64_t> findSymbol(const std::string &name) {
  if (name == "_main")
    return 0x10001000;
  return std::nullopt;
}

std::optional<std::string> demangleName(uint64_t addr) {
  if (addr == 0x10001000)
    return "main";
  return std::nullopt;
}

int main() {
  auto result =
      findSymbol("_main")
          .transform([](uint64_t addr) { return addr + 0x10; })
          .and_then([](uint64_t addr) { return demangleName(addr - 0x10); })
          .or_else([]() -> std::optional<std::string> { return "unknown"; });

  std::println("Result: {}", *result);

  return 0;
}