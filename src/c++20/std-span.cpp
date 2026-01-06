#include <cstdint>
#include <iostream>
#include <span>
#include <vector>

void hexDump(std::span<const uint8_t> data) {
  for (auto byte : data) {
    std::cout << std::hex << static_cast<int>(byte) << " ";
  }

  std::cout << "\n";
}

int main() {
  // https://github.com/apple-oss-distributions/xnu/blob/f6217f891ac0bb64f3d375211650a4c1ff8ca1ea/EXTERNAL_HEADERS/mach-o/loader.h#L84
  std::vector<uint8_t> vec{0xCF, 0xFA, 0xED, 0xFE};
  uint8_t arr[] = {0x00, 0x00, 0x00, 0x00};

  hexDump(vec);
  hexDump(arr);
  hexDump({vec.data(), 2});

  return 0;
}