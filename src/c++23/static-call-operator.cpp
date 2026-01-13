#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

struct IsNop {
  static bool operator()(uint32_t opcode) {
    // $ echo "nop" | llvm-mc -arch=aarch64 -show-encoding
    // nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
    return opcode == 0xD503201F;
  }
};

int main() {
  std::vector<uint32_t> opcodes = {
      0xD503201F,
      // $ echo "bl 0x40" | llvm-mc -arch=aarch64 -show-encoding
      // bl      #64                             // encoding: [0x10,0x00,0x00,0x94]
      0x94000010,
  };

  auto count = std::count_if(opcodes.begin(), opcodes.end(), IsNop{});
  std::println("NOP count: {}", count);

  return 0;
}