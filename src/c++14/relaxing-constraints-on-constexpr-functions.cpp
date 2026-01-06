#include <cstdint>
#include <iostream>

constexpr const char *getRegName(uint32_t reg) {
  if (reg == 29)
    return "fp";
  if (reg == 30)
    return "lr";
  return "x?";
}

constexpr uint32_t decodeRd(uint32_t insn) { return insn & 0x1F; }

int main() {
  // echo "mov x29, sp" | llvm-mc -arch=aarch64 -show-encoding
  //   mov     x29, sp                         // encoding: [0xfd,0x03,0x00,0x91]
  constexpr uint32_t insn = 0x910003fd;
  // https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/MOV--register---Move-register-value--an-alias-of-ORR--shifted-register--?lang=en
  constexpr auto rd = decodeRd(insn);
  static_assert(rd == 29, "Rd should be x29");
  std::cout << "Rd: " << getRegName(rd) << "\n";
  return 0;
}