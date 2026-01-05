#include <cstdint>
#include <initializer_list>
#include <iostream>

struct Symbol {
  uint64_t addr;
  uint64_t size;

  Symbol(uint64_t a) : addr(a), size(0) { std::cout << "Single arg.\n"; }

  Symbol(uint64_t a, uint64_t s) : addr(a), size(s) {
    std::cout << "Two args.\n";
  }

  Symbol(std::initializer_list<uint64_t> list)
      : addr(list.size() > 0 ? *list.begin() : 0),
        size(list.size() > 0 ? *(list.begin() + 1) : 0) {
    std::cout << "initializer_list\n";
  }
};

int main() {

  Symbol s1(0x1000, 0x100);
  Symbol s2{0x2000, 0x200};
  Symbol s3 = {0x3000};

  // invalid narrowing conversion from "double" to "unsigned long"
  // Symbol s4 {1000.0};
  Symbol s5(1000.0);
  return 0;
}