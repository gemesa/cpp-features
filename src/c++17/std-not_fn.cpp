#include <algorithm>
#include <cstdint>
#include <functional>
#include <iostream>
#include <vector>

int main() {
  std::vector<uint64_t> addrs{0x1000, 0x0, 0x2000, 0x0, 0x3000};

  auto isZero = [](uint64_t a) { return a == 0; };

  auto count = std::count_if(addrs.begin(), addrs.end(), std::not_fn(isZero));

  std::cout << "Non-zero: " << count << "\n";

  return 0;
}