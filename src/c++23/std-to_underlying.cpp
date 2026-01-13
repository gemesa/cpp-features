#include <cstdint>
#include <print>
#include <utility>

// https://github.com/apple-oss-distributions/xnu/blob/f6217f891ac0bb64f3d375211650a4c1ff8ca1ea/EXTERNAL_HEADERS/mach-o/loader.h#L110
enum class MachOFileType : uint32_t {
  Execute = 0x2,
  Dylib = 0x6,
  Bundle = 0x8,
  Dsym = 0xa
};

int main() {
  MachOFileType type = MachOFileType::Dylib;

  // Before C++23:
  // auto val = static_cast<std::underlying_type_t<MachOFileType>>(type);

  // C++23:
  auto val = std::to_underlying(type);

  std::println("File type: {:#x}", val);

  return 0;
}