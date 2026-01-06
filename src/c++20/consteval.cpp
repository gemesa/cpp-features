#include <cstdint>
#include <iostream>

// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
// $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
//	bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
consteval uint32_t makeBlOpcode(uint32_t offset) {
  return 0x94000000 | ((offset / 4) & 0x03FFFFFF);
}

int main() {
  constexpr uint32_t bl_0x40 = makeBlOpcode(0x40);
  std::cout << "BL 0x40: 0x" << std::hex << bl_0x40 << "\n";
  return 0;
}