#include <cstdint>
#include <cstring>
#include <expected>
#include <print>

enum class ParseError {
  InvalidMagic,
  TooShort,
};

std::expected<uint32_t, ParseError> parseMagic(const uint8_t *data,
                                               size_t size) {
  if (size < 4) {
    return std::unexpected(ParseError::TooShort);
  }

  uint32_t magic;
  std::memcpy(&magic, data, sizeof(magic));

  // https://en.wikipedia.org/wiki/Mach-O
  if (magic != 0xFEEDFACF && magic != 0xFEEDFACE) {
    return std::unexpected(ParseError::InvalidMagic);
  }

  return magic;
}

int main() {
  std::array<uint8_t, 4> buffer = {0xCF, 0xFA, 0xED, 0xFE};
  auto result = parseMagic(buffer.data(), buffer.size());

  if (result) {
    std::println("Magic: {:#x}", result.value());
  } else {
    std::println("Error: {}", std::to_underlying(result.error()));
  }

  return 0;
}