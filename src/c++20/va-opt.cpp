#include <cstdint>
#include <format>
#include <iostream>

#define LOG(fmt, ...)                                                          \
  std::cout << std::format(fmt __VA_OPT__(, ) __VA_ARGS__) << "\n"

int main() {
  // Without __VA_OPT__(,), this:
  // std::cout << std::format(fmt, __VA_ARGS__) << "\n"
  // would expand to:
  // std::cout << std::format("Analysis started.", ) << "\n"
  // causing an error.
  LOG("Analysis started.");
  LOG("Found branch at {:#x}", 0x1000);
  return 0;
}