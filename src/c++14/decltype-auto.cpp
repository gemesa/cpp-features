#include <cstdint>
#include <iostream>

uint64_t entry = 0x10001000;

uint64_t &getRef() { return entry; }
uint64_t getVal() { return entry; }

auto wrapperAuto() { return getRef(); }

decltype(auto) wrapperDecltype() { return getRef(); }

int main() {
  // expression must be a modifiable lvalue
  // wrapperAuto() = 0x10002000;

  wrapperDecltype() = 0x10003000;
  std::cout << "After decltype: 0x" << std::hex << entry << "\n";

  return 0;
}