#include <cstdint>
#include <iostream>

struct AnalysisResult {
  bool valid;
  uint64_t entry;

  explicit operator bool() const { return valid; }
};

int main() {

  AnalysisResult r{true, 0x1000};

  if (r) {
    std::cout << "Valid.\n";
  }

  // no suitable conversion function from "AnalysisResult" to "int" exists
  // int x = r;

  return 0;
}