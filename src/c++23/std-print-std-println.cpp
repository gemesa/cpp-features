#include <cstdint>
#include <print>

int main() {
  uint64_t addr = 0x10001000;
  // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  uint32_t opcode = 0x94000010;
  // https://en.cppreference.com/w/cpp/utility/format/spec.html
  std::println("Entry point: {:#x}", addr);
  std::println("Opcode: {:#x} at {:#x}", opcode, addr);

  return 0;
}