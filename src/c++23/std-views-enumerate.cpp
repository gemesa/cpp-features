// std::views::enumerate is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#if defined(__linux__)
#include <print>
#include <ranges>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> sections = {"__TEXT", "__DATA", "__LINKEDIT"};

  for (auto [idx, name] : std::views::enumerate(sections)) {
    std::println("Section {}: {}", idx, name);
  }

  return 0;
}
#else
int main() { return 0; }
#endif