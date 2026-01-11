#include <cstdint>
#include <iostream>

template <typename... Args> auto makeLogger(Args &&...args) {
  return [... captures = std::forward<Args>(args)]() {
    std::cout << std::hex;
    ((std::cout << captures << " "), ...);
    std::cout << "\n";
  };
}

int main() {
  auto log = makeLogger("Symbol:", "_main", "@", 0x10001000);
  log();
  return 0;
}