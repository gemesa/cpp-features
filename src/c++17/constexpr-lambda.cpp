#include <cstdint>
#include <iostream>

int main() {
  // https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/MOV--register---Move-register-value--an-alias-of-ORR--shifted-register--?lang=en
  constexpr auto decodeRd = [](uint32_t insn) { return insn & 0x1F; };

  // $ echo "mov x29, sp" | llvm-mc -triple=aarch64 -show-encoding
  // mov	x29, sp                         // encoding: [0xfd,0x03,0x00,0x91]
  constexpr uint32_t insn = 0x910003fd;
  constexpr auto rd = decodeRd(insn);
  static_assert(rd == 29, "Rd should be x29");

  std::cout << "Rd: x" << rd << "\n";

  return 0;
}