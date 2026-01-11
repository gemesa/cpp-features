#include <cstdint>
#include <functional>
#include <iostream>

struct Analyzer {
  uint64_t base = 0x10000000;

  // implicit capture of 'this' with a capture default of '=' is deprecated
  // auto getBadLogger() {
  //   return [=]() { return base; };
  // }

  auto getGoodLogger() {
    return [=, this]() { return base; };
  }

  // Copy of *this.
  // Safe if object dies.
  auto getSafeLogger() {
    return [=, *this]() { return base; };
  }
};

int main() {
  auto goodLogger = Analyzer{}.getGoodLogger();
  std::cout << "Base: 0x" << std::hex << goodLogger() << "\n";
  auto safeLogger = Analyzer{}.getSafeLogger();
  std::cout << "Base: 0x" << std::hex << safeLogger() << "\n";
  return 0;
}