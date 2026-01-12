#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <print>

constexpr uint32_t decodeOpcode(uint32_t encoded, uint32_t key) {
  uint32_t decoded = encoded ^ key;

  // https://developer.arm.com/documentation/ddi0602/2025-12/Index-by-Encoding
  // Simplified check.
  uint32_t op0 = (decoded >> 25) & 0xF;
  bool valid = op0 != 0;

  if (!valid) {
    if consteval {
      throw("Invalid opcode detected at compile time.");
    } else {
      std::cerr << "Invalid opcode: " << std::hex << decoded << "\n";
      std::abort();
    }
  }
  return decoded;
}

int main() {
  // https://github.com/jgamblin/Mirai-Source-Code/blob/3273043e1ef9c0bb41bd9fcdc5317f7b797a2a94/mirai/bot/table.c#L13
  constexpr uint32_t key = 0xDEADBEEF;

  // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  constexpr uint32_t op1 = decodeOpcode(0x94000010 ^ key, key);

  uint32_t userInput = 0x94000010 ^ key;
  uint32_t op2 = decodeOpcode(userInput, key);

  std::println("{:#x}, {:#x}", op1, op2);

  return 0;
}