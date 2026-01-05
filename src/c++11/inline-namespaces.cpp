#include <cstdint>
#include <iostream>

namespace Analyzer {
namespace V1 {
void run() { std::cout << "V1\n"; }
} // namespace V1

// Default.
inline namespace V2 {
void run() { std::cout << "V2\n"; }
} // namespace V2
} // namespace Analyzer

int main() {
  Analyzer::run();
  Analyzer::V1::run();
  Analyzer::V2::run();
  return 0;
}