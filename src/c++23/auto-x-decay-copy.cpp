#include <algorithm>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> addrs = {0x1050, 0x1010, 0x1040, 0x1020};

  // Before C++23: need temporary variable.
  // auto copy = data;

  // C++23: inline decay copy.
  auto sorted = [](auto v) {
    std::sort(v.begin(), v.end());
    return v;
  }(auto(addrs));

  std::println("Original first: {:#x}", addrs[0]);
  std::println("Sorted first: {:#x}", sorted[0]);

  return 0;
}