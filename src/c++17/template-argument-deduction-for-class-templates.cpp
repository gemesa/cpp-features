#include <cstdint>
#include <iostream>
#include <vector>

template <typename T> struct Buffer {
  T *data;
  size_t size;
  Buffer(T *d, size_t s) : data(d), size(s) {}
};

int main() {
  // $ echo "stp x29, x30, [sp, #-16]\!" | llvm-mc -triple=aarch64 -show-encoding
  // stp	x29, x30, [sp, #-16]!           // encoding: [0xfd,0x7b,0xbf,0xa9]
  uint8_t bytes[] = {0xFD, 0x7B, 0xBF, 0xA9};

  // C++14
  // Buffer<uint8_t> buf(bytes, 4);

  // C++17
  Buffer buf(bytes, 4);

  std::cout << "Buffer size: " << buf.size << "\n";

  return 0;
}