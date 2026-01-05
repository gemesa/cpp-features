#include <cstdint>
#include <iostream>
#include <map>
#include <vector>

int main() {
  std::map<uint64_t, std::vector<int>> data;

  data.emplace(0x1000, std::vector<int>{1, 2});
  data.emplace(0x2000, std::vector<int>{3});

  for (const auto &e : data) {
    std::cout << "0x" << std::hex << e.first << " : " << e.second.size()
              << " items.\n";
  }

  return 0;
}