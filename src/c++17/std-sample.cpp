#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int main() {
  std::vector<const char *> symbols = {"_main", "_helper", "_init", "_fini",
                                       "_start"};

  std::vector<const char *> sampled;

  std::sample(symbols.begin(), symbols.end(), std::back_inserter(sampled), 2,
              std::mt19937{std::random_device{}()});

  for (auto s : sampled) {
    std::cout << s << "\n";
  }

  return 0;
}