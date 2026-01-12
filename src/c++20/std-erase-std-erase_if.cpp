#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> symbols{"_main", "__stub_helper", "_helper"};

  auto n = std::erase(symbols, "_main");

  std::cout << "Removed " << n << " element(s).\n";

  n = std::erase_if(
      symbols, [](const std::string &s) { return s.starts_with("__stub"); });

  std::cout << "Removed " << n << " element(s).\n";

  for (const auto &s : symbols) {
    std::cout << s << "\n";
  }

  return 0;
}