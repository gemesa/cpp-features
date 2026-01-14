// std::views::chunk is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#if defined(__linux__)
#include <cstdint>
#include <print>
#include <ranges>
#include <vector>

int main() {
  std::vector<uint8_t> data = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                               0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};

  for (auto chunk : data | std::views::chunk(4)) {
    for (auto byte : chunk) {
      std::print("{:02x}", byte);
    }
    std::println("");
  }

  return 0;
}
#else
int main() { return 0; }
#endif