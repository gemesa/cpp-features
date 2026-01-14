// Formatting ranges is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#if defined(__APPLE__)
#include <map>
#include <print>
#include <tuple>
#include <vector>

int main() {
  std::vector<int> addrs = {0x1000, 0x1100, 0x1200};
  std::map<std::string, int> symbols = {{"_main", 0x1000}, {"_helper", 0x1100}};

  std::println("Addresses: {::#x}", addrs);
  std::println("Symbols: {}", symbols);

  return 0;
}
#else
int main() { return 0; }
#endif