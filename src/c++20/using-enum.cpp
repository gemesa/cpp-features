#include <cstdint>
#include <iostream>

// https://github.com/apple-oss-distributions/xnu/blob/f6217f891ac0bb64f3d375211650a4c1ff8ca1ea/EXTERNAL_HEADERS/mach-o/loader.h
enum class LoadCommand : uint32_t {
  LC_SEGMENT_64 = 0X19,
  LC_SYMTAB = 0x2,
};

const char *lcName(LoadCommand cmd) {
  using enum LoadCommand;
  switch (cmd) {
  case LC_SEGMENT_64:
    return "LC_SEGMENT_64";
  case LC_SYMTAB:
    return "LC_SYMTAB";
  default:
    return "UNKNOWN";
  }
}

int main() {
  std::cout << lcName(LoadCommand::LC_SEGMENT_64) << "\n";
  return 0;
}