#include <cstdint>
#include <iostream>

// C++17:
namespace re::macho::arm64 {
// $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
// nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
constexpr uint32_t NOP = 0xD503201F;
} // namespace re::macho::arm64

// Before C++17:
// namespace re { namespace { macho { namespace arm64 {...}}}}

int main() {
  std::cout << "NOP: 0x" << std::hex << re::macho::arm64::NOP << "\n";
  return 0;
}