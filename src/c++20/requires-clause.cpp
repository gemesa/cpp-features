#include <cstdint>
#include <iostream>
#include <type_traits>

template <typename T>
  requires std::is_integral_v<T> && (sizeof(T) >= 4)
T extractBits(T value, int start, int len) {
  return (value >> start) & ((T{1} << len) - 1);
}

int main() {
  // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  uint32_t instr = 0x94000010;
  // https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
  auto offset = extractBits(instr, 0, 26);
  std::cout << "Offset: 0x" << std::hex << offset << "\n";
  return 0;
}