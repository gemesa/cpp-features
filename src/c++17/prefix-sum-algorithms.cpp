#include <iostream>
#include <numeric>
#include <vector>

int main() {
  // Strings: "_main", "_helper", "_start".
  std::vector<size_t> lens{5, 7, 6};
  std::vector<size_t> out(lens.size());

  std::exclusive_scan(lens.begin(), lens.end(), out.begin(), 0);
  for (const auto &s : out) {
    std::cout << s << " ";
  }
  std::cout << "\n";

  std::inclusive_scan(lens.begin(), lens.end(), out.begin());
  for (const auto &s : out) {
    std::cout << s << " ";
  }
  std::cout << "\n";

  // Add null terminator, then scan.
  std::transform_exclusive_scan(lens.begin(), lens.end(), out.begin(), 0,
                                std::plus{}, [](size_t l) { return l + 1; });
  for (const auto &s : out) {
    std::cout << s << " ";
  }
  std::cout << "\n";

  std::transform_inclusive_scan(lens.begin(), lens.end(), out.begin(),
                                std::plus{}, [](size_t l) { return l + 1; });
  for (const auto &s : out) {
    std::cout << s << " ";
  }
  std::cout << "\n";

  return 0;
}