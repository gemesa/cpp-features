#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> instructions = {"stp x29, x30, [sp, #-16]!",
                                           "mov x29, sp", "ret"};

  std::cout << "Before move: " << instructions.size() << " instructions.\n";

  std::vector<std::string> cache = std::move(instructions);

  std::cout << "After move:\n";
  std::cout << "  original: " << instructions.size() << "\n";
  std::cout << "  cache: " << cache.size() << "\n";

  return 0;
}