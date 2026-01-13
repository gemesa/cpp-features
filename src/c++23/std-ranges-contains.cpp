#include <algorithm>
#include <print>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> imports = {"_printf", "_malloc", "_free", "_exit"};

  // Before C++23:
  // bool found = std::find(imports.begin(), imports.end(), "_malloc") != imports.end();

  // C++23:
  if (std::ranges::contains(imports, "_malloc")) {
    std::println("Uses malloc.");
  }

  // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  std::vector<uint8_t> bytes = {0x00, 0x94, 0x00, 0x00, 0x10, 0x00};
  std::vector<uint8_t> bl = {0x94, 0x00, 0x00, 0x10};

  if (std::ranges::contains_subrange(bytes, bl)) {
    std::println("Found BL instruction.");
  }

  return 0;
}
