#include <cstdint>
#include <iostream>

void readMemory(uint64_t addr) {
  std::cout << "addr=0x" << std::hex << addr << "\n";
}

void readMemory(uint64_t addr, size_t len) {
  std::cout << "addr=0x" << std::hex << addr << " len=0x" << std::hex << len
            << "\n";
}

template <typename... Args> void hookWrapper(const char *name, Args... args) {
  std::cout << "Calling " << name << " (" << sizeof...(args) << " args).\n";

  readMemory(args...);
}

int main() {
  hookWrapper("readMemory", 0x10001000);
  hookWrapper("readMemory", 0x10001000, 0x100);

  return 0;
}