#include <cstdint>
#include <print>
#include <vector>

class MemoryView2D {
  uint8_t *data_;
  // Number of columns per row.
  size_t width_;

public:
  MemoryView2D(uint8_t *d, size_t w) : data_(d), width_(w) {}

  uint8_t &operator[](size_t row, size_t col) {
    return data_[row * width_ + col];
  }
};

int main() {
  // 1D array.
  std::vector<uint8_t> buffer(16 * 16, 0);

  // 2D view.
  MemoryView2D view(buffer.data(), 16);
  view[0, 0] = 0xCF;
  view[0, 1] = 0xFA;
  view[1, 0] = 0xED;

  std::println("{:#x}", view[0, 0]);

  return 0;
}