#include <cstdint>
#include <iostream>

template <auto N> struct Buffer {
  uint8_t data[N];
  static constexpr auto size = N;
};

int main() {
  Buffer<64> small;
  Buffer<0x1000> page;

  std::cout << "Small: " << small.size << "\n";
  std::cout << "Page: 0x" << std::hex << page.size << "\n";

  return 0;
}