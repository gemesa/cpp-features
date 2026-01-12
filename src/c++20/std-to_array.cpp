#include <array>
#include <cstdint>
#include <iostream>

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  uint8_t magic[] = {0xCF, 0xFA, 0xED, 0xFE};
  auto arr = std::to_array(magic);

  std::cout << "Size: " << arr.size() << "\n";

  // $ echo "mov x29, sp" | llvm-mc -arch=aarch64 -show-encoding
  //    mov     x29, sp                         // encoding: [0xfd,0x03,0x00,0x91]
  // $ echo "bl 0x40" | llvm-mc -arch=aarch64 -show-encoding
  //    bl      #64                             // encoding: [0x10,0x00,0x00,0x94]
  auto opcodes = std::to_array<uint32_t>({0x910003FD, 0x94000010});

  for (auto op : opcodes) {
    std::cout << "0x" << std::hex << op << "\n";
  }

  return 0;
}