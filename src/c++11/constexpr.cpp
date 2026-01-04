#include <iostream>

constexpr size_t ARM64_INST_SIZE = 4;
constexpr size_t MAX_INSTS = 100;
constexpr size_t BUFFER_SIZE = ARM64_INST_SIZE * MAX_INSTS;

constexpr size_t calcBufferSize(size_t instCount) {
  return ARM64_INST_SIZE * instCount;
}

int main() {

  uint8_t buffer[BUFFER_SIZE];
  uint8_t smallBuffer[calcBufferSize(10)];

  size_t count = 50;
  size_t runtimeSize = calcBufferSize(count);

  std::cout << "Buffer size: " << sizeof(buffer) << "\n";
  std::cout << "Small buffer size: " << sizeof(smallBuffer) << "\n";
  std::cout << "Runtime calc: " << runtimeSize << "\n";

  return 0;
}