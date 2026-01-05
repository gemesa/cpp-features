#include <cstdint>
#include <iostream>
#include <tuple>

std::tuple<uint64_t, uint64_t, const char *> getSegmentInfo() {
  return std::make_tuple(0x10000000, 0x4000, "__TEXT");
}

int main() {
  uint64_t addr;
  const char *name;

  std::tie(addr, std::ignore, name) = getSegmentInfo();

  std::cout << name << " @ 0x" << std::hex << addr << "\n";

  return 0;
}