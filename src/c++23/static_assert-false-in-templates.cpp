#include <cstdint>
#include <print>

template <typename T> T byteswap(T val) {
  if constexpr (sizeof(T) == 1) {
    return val;
  } else if constexpr (sizeof(T) == 2) {
    return (val >> 8 | val << 8);
  } else {
    static_assert(false, "Unsupported size.");
  }
}

int main() {
  auto swapped1 = byteswap(uint8_t{0x12});
  std::println("Swapped: {:#x}", swapped1);
  auto swapped2 = byteswap(uint16_t{0x12});
  std::println("Swapped: {:#x}", swapped2);
  // error: static assertion failed: Unsupported size.
  // byteswap(uint32_t{0x12});

  return 0;
}