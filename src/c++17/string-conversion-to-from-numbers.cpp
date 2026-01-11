#include <charconv>
#include <iostream>
#include <string_view>

int main() {
  std::string_view str = "10001000";
  uint64_t addr;
  // ptr points to where parsing stops.
  auto [ptr, ec] =
      std::from_chars(str.data(), str.data() + str.size(), addr, 16);
  // std::errc{} --> success (no error).
  // Similar to errno but type-safe.
  if (ec == std::errc{}) {
    std::cout << "Parsed 0x" << std::hex << addr << "\n";
  }

  char buf[20];
  auto [end, ec2] = std::to_chars(buf, buf + sizeof(buf), addr, 16);
  std::cout << "String: " << std::string_view(buf, end - buf) << "\n";

  return 0;
}