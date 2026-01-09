#include <cstdint>
#include <functional>
#include <iostream>

struct Analyzer {
  uint64_t baseAddr = 0x10000000;

  auto getCallback() {
    return [*this]() { return baseAddr; };
  }
};

int main() {
  std::function<uint64_t()> callback;

  {
    Analyzer a;
    callback = a.getCallback();
    a.baseAddr = 0xDEAD;
  }

  std::cout << "Base: 0x" << std::hex << callback() << "\n";

  return 0;
}