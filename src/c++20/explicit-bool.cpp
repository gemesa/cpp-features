#include <cstdint>
#include <iostream>
#include <type_traits>

struct Address {
  uint64_t value;

  // Implicit for integral, explicit for others.
  template <typename T>
  explicit(!std::is_integral_v<T>) Address(T v)
      : value(static_cast<uint64_t>(v)) {}
};

void analyze(Address addr) {
  std::cout << "Analyzing: 0x" << std::hex << addr.value << "\n";
}

int main() {
  analyze(0x1000);
  // no suitable constructor exists to convert from "double" to "Address"
  // analyze(3000.0);
  analyze(Address{4096.0});
  return 0;
}