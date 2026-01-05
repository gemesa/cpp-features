#include <cstdint>
#include <iostream>
#include <vector>

struct CodeBuffer {
  uint8_t *data;
  size_t size;

  CodeBuffer(size_t n) : data(new uint8_t[n]), size(n) {
    std::cout << "Allocated " << n << " bytes.\n";
  }

  ~CodeBuffer() { delete[] data; }

  // If noexcept is not added to the move constructor,
  // copy is called.
  CodeBuffer(const CodeBuffer &other)
      : data(new uint8_t[other.size]), size(other.size) {
    std::memcpy(data, other.data, size);
    std::cout << "Copied.\n";
  }

  CodeBuffer(CodeBuffer &&other) noexcept : data(other.data), size(other.size) {
    other.data = nullptr;
    other.size = 0;
    std::cout << "Moved.\n";
  }

  CodeBuffer &operator=(const CodeBuffer &) = delete;
  CodeBuffer &operator=(CodeBuffer &&) = delete;
};

int main() {
  std::vector<CodeBuffer> buffers;
  buffers.emplace_back(100);
  buffers.emplace_back(200);
  buffers.emplace_back(300);
  return 0;
}