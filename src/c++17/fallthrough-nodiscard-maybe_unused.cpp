#include <cstdint>
#include <iostream>

// https://en.wikipedia.org/wiki/Mach-O
[[nodiscard]] bool validate(uint32_t magic) { return magic == 0xFEEDFACF; }

// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/B--Branch-?lang=en
// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
void analyzeInstr(uint32_t instr, [[maybe_unused]] uint64_t addr) {
  // Bits 31..26.
  uint32_t op = (instr >> 26) & 0x3F;
  switch (op) {
  // BL.
  case 0x5:
    std::cout << "Recording call.\n";
    [[fallthrough]];
    // B.
  case 0x25:
    std::cout << "Analyzing branch.\n";
    break;
  default:
    break;
  }
}

int main() {
  bool ok = validate(0xFEEDFACF);
  std::cout << "Magic is valid: " << std::boolalpha << ok << "\n";

  // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  analyzeInstr(0x94000010, 0x1000);
  // $ echo "b 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // b	#64                             // encoding: [0x10,0x00,0x00,0x14]
  analyzeInstr(0x14000010, 0x2000);

  return 0;
}