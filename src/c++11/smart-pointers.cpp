#include <cstdint>
#include <iostream>
#include <memory>

struct LoadCommand {
  uint32_t cmd;
  LoadCommand(uint32_t c) : cmd(c) { std::cout << "  Created.\n"; }
  ~LoadCommand() { std::cout << "  Destroyed.\n"; }
};

int main() {
  std::cout << "unique_ptr\n";
  {
    // https://en.wikipedia.org/wiki/Mach-O
    std::unique_ptr<LoadCommand> lc(new LoadCommand(0x19));
    // function "std::__1::unique_ptr<_Tp, _Dp>::unique_ptr(const std::__1::unique_ptr<LoadCommand, std::__1::default_delete<LoadCommand>> &) [with _Tp=LoadCommand, _Dp=std::__1::default_delete<LoadCommand>]" (declared implicitly) cannot be referenced -- it is a deleted function
    // auto copy = lc;
    auto moved = std::move(lc);
  }

  std::cout << "shared_ptr\n";
  {
    // https://en.wikipedia.org/wiki/Mach-O
    auto a = std::make_shared<LoadCommand>(0x02);
    auto b = a;
    std::cout << "  Owners: " << a.use_count() << "\n";
  }

  return 0;
}