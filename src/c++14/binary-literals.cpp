#include <cstdint>
#include <iostream>

int main() {
  // https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
  uint32_t blMask = 0b1111'1100'0000'0000'0000'0000'0000'0000;
  uint32_t blOpcode = 0b1001'0100'0000'0000'0000'0000'0000'0000;

  // $ echo "bl #0x40" | llvm-mc -arch=aarch64 -show-encoding
  //    bl      #64                             // encoding: [0x10,0x00,0x00,0x94]
  uint32_t blInsn = 0x94000010;

  bool isBl = (blInsn & blMask) == blOpcode;

  std::cout << "Is BL: " << std::boolalpha << isBl << "\n";

  return 0;
}