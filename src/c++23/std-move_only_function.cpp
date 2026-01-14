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