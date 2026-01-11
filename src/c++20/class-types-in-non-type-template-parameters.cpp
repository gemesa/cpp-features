#include <cstdint>
#include <iostream>

struct Opcode {
  uint32_t mask;
  uint32_t value;
};

template <Opcode op> bool matches(uint32_t instr) {
  return (instr & op.mask) == op.value;
}

int main() {
  // https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
  constexpr Opcode BL{0xFC000000, 0x94000000};

  // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  uint32_t instr = 0x94000010;

  if (matches<BL>(instr)) {
    std::cout << "Matched BL." << "\n";
  }

  return 0;
}