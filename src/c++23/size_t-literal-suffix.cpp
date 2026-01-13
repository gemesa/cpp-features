#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint8_t> buffer(256);

  // Before C++23:
  // warning: comparison of integers of different signs
  // for (int i = 0; i < buffer.size(); ++i) {}

  // C++23
  for (auto i = 0uz; i < buffer.size(); ++i) {
    buffer[i] = static_cast<uint8_t>(i);
  }

  auto index = 10uz;

  std::println("{}", buffer[index]);

  return 0;
}
