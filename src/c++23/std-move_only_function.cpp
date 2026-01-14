// std::move_only_function is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#if defined(__linux__)
#include <functional>
#include <memory>
#include <print>

int main() {
  auto addr = std::make_unique<uint64_t>(0x1000);

  std::move_only_function<void()> task = [a = std::move(addr)]() {
    std::println("Address: {:#x}", *a);
  };

  task();

  return 0;
}
#else
int main() { return 0; }
#endif