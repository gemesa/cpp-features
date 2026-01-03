#include <cstdint>
#include <iostream>
#include <utility>

void readMemory(uint64_t &addr) {
  std::cout << "readMemory (lvalue ref): 0x" << std::hex << addr << "\n";
}

void readMemory(uint64_t &&addr) {
  std::cout << "readMemory (rvalue ref): 0x" << std::hex << addr << "\n";
}

struct ReadMemoryWrapper {
  template <typename T> void operator()(T &&addr) const {
    readMemory(std::forward<T>(addr));
  }
};

template <typename Func, typename Arg>
auto hookWrapper(const char *name, Func &&func, Arg &&arg)
    -> decltype(func(std::forward<Arg>(arg))) {
  std::cout << "Calling " << name << ".\n";
  return func(std::forward<Arg>(arg));
}

int main() {
  uint64_t address = 0x10001000;

  std::cout << "Direct calls:\n";
  readMemory(address);
  readMemory(0x10002000);

  std::cout << "Calls via hook wrapper:\n";

  // Helper functor so the proper readMemory function is called.
  ReadMemoryWrapper readMemoryWrapper;

  // Deduction:
  //   Func = lambda&
  //   Func&& = lambda& && = lambda& (collapsed, T& && --> T&)
  //   Arg = uint64_t&
  //   Arg&& = uint64_t& && = uint64_t& (collapsed, T& && --> T&)
  hookWrapper("readMemory", readMemoryWrapper, address);

  // Deduction:
  //   Func = lambda&
  //   Func&& = lambda& && = lambda& (collapsed, T& && --> T&)
  //   Arg = uint64_t
  //   Arg&& = uint64_t&&
  hookWrapper("readMemory", readMemoryWrapper, 0x10002000);

  return 0;
}