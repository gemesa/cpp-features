#include <cstdint>
#include <iostream>

[[deprecated("Use analyzeV2() instead.")]]
void analyze(uint64_t addr) {
  std::cout << "Old analysis: 0x" << std::hex << addr << "\n";
}

void analyzeV2(uint64_t addr) {
  std::cout << "New analysis: 0x" << std::hex << addr << "\n";
}

int main() {
  analyzeV2(0x10001000);

  // Uncomment to see deprecation warning.
  // analyze(0x10001000);
  return 0;
}