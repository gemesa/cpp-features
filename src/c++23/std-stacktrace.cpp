// std::stacktrace is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#if defined(__linux__)
#include <print>
#include <stacktrace>
#include <string_view>

void analyzeFunction(uint64_t addr) {
  std::println("Analyzing {:#x}", addr);
  std::println("Callstack:\n{}", std::stacktrace::current());
}

void processSection([[maybe_unused]] std::string_view name) {
  analyzeFunction(0x10001000);
}

int main() {
  processSection("__TEXT");
  return 0;
}
#else
int main() { return 0; }
#endif