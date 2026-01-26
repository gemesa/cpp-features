#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

// C++11
// template<typename Container>
// auto getFirst(Container& c) -> decltype(c.front()) {
//     return c.front();
// }

template <typename Container> auto getFirst(Container &c) { return c.front(); }

int main() {
  std::vector<uint64_t> addrs = {0x1000, 0x2000};
  auto first = getFirst(addrs);
  std::cout << "First address: 0x" << std::hex << first << "\n";
  return 0;
}