// https://stackoverflow.com/questions/12084040/what-is-the-difference-between-decltype-and-auto-as-a-placeholder-type-for-varia

#include <cstdint>
#include <iostream>

struct MachO32 {
  uint32_t getEntryPoint() { return 0x1000; }
};

struct MachO64 {
  uint64_t getEntryPoint() { return 0x10001000; }
};

template <typename Binary>
auto findEntry(Binary &bin) -> decltype(bin.getEntryPoint()) {
  return bin.getEntryPoint();
}

int main() {
  MachO32 bin32;
  MachO64 bin64;

  auto entry32 = findEntry(bin32);
  auto entry64 = findEntry(bin64);

  std::cout << "32-bit entry: 0x" << std::hex << entry32 << "\n";
  std::cout << "64-bit entry: 0x" << std::hex << entry64 << "\n";

  return 0;
}