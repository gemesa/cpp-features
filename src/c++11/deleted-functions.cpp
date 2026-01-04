#include <iostream>

class CodeBuffer {
  std::unique_ptr<uint8_t[]> data;
  size_t size;

public:
  CodeBuffer(size_t s) : data(new uint8_t[s]), size(s) {
    std::cout << "Allocated " << size << " bytes.\n";
  }

  ~CodeBuffer() { std::cout << "Freed " << size << " bytes.\n"; }

  // Move constructor.
  CodeBuffer(CodeBuffer &&other) noexcept
      : data(std::move(other.data)), size(other.size) {
    other.size = 0;
  }
  // Move assignment.
  CodeBuffer &operator=(CodeBuffer &&other) {
    if (this != &other) {
      data = std::move(other.data);
      size = other.size;
      other.size = 0;
    }

    return *this;
  }

  // Copy constructor.
  CodeBuffer(const CodeBuffer &) = delete;
  // Copy assignment.
  CodeBuffer &operator=(const CodeBuffer &) = delete;
};

int main() {
  CodeBuffer a(1024);
  // function "CodeBuffer::CodeBuffer(const CodeBuffer &)" cannot be referenced
  // -- it is a deleted function CodeBuffer b = a;
  CodeBuffer b = std::move(a);
  return 0;
}