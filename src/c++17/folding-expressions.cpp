#include <cstdint>
#include <iostream>

template <typename... Args> void log(Args... args) {
  // Binary fold: init op ... op pack (2 operators).
  // Expands to: ((std::cout << arg1) << arg2) << arg3.
  (std::cout << ... << args) << "\n";
}

template <typename... Flags> constexpr auto combineFlags(Flags... flags) {
  // Unary fold: pack op ... (1 operator).
  // Expands to: flag1 | flag2 | flag3.
  return (flags | ...);
}

int main() {
  log("Entry: 0x", std::hex, 0x10001000);

  // https://github.com/apple-oss-distributions/xnu/blob/main/EXTERNAL_HEADERS/mach-o/loader.h#L145
  // https://github.com/apple-oss-distributions/xnu/blob/main/EXTERNAL_HEADERS/mach-o/loader.h#L190
  constexpr uint32_t MH_PIE = 0x20000;
  constexpr uint32_t MH_TWOLEVEL = 0x80;
  constexpr auto flags = combineFlags(MH_PIE, MH_TWOLEVEL);

  std::cout << "Flags: 0x" << std::hex << flags << "\n";

  return 0;
}