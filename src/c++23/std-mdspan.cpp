#include <cstdint>
#include <mdspan>
#include <print>

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  // clang-format off
  std::array<uint8_t, 16> data = {0xCF, 0xFA, 0xED, 0xFE, 0x00, 0x00, 0x00, 0x00,
                                  0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
  // clang-format on

  std::mdspan view(data.data(), 2, 8);

  // view.extent(0) is 2 (rows)
  // view.extent(1) is 8 (columns)
  for (size_t row = 0; row < view.extent(0); ++row) {
    for (size_t col = 0; col < view.extent(1); ++col) {
      std::print("{:02x}", view[row, col]);
    }
    std::println("");
  }

  return 0;
}