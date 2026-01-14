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