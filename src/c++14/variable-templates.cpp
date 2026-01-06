#include <cstdint>
#include <iostream>

template <typename T> constexpr T pageSize = 0x1000;

template <typename T> constexpr T machoBase = 0;

// template<> marks an explicit specialization (for type uint64_t).
template <> constexpr uint64_t machoBase<uint64_t> = 0x10000000;

// template<> marks an explicit specialization (for type uint32_t).
template <> constexpr uint32_t machoBase<uint32_t> = 0x1000;

int main() {
  std::cout << std::hex;
  std::cout << "Page size: 0x" << pageSize<uint64_t> << "\n";
  std::cout << "64-bit base: 0x" << machoBase<uint64_t> << "\n";
  std::cout << "32-bit base: 0x" << machoBase<uint32_t> << "\n";

  return 0;
}