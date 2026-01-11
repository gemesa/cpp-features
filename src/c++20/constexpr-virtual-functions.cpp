#include <cstdint>
#include <iostream>

struct Arch {
  virtual constexpr uint32_t pointerSize() const = 0;
  virtual constexpr ~Arch() = default;
};

struct ARM64 : Arch {
  constexpr uint32_t pointerSize() const override { return 8; }
};

struct ARM32 : Arch {
  constexpr uint32_t pointerSize() const override { return 4; }
};

template <typename T> constexpr uint64_t stackAlloc(int count) {
  T arch;
  return arch.pointerSize() * count;
}

int main() {
  constexpr auto size = stackAlloc<ARM64>(4);
  static_assert(size == 32, "Stack alloc is expected to be 32 bytes.");
  std::cout << "Stack alloc: " << size << " bytes.\n";
  return 0;
}