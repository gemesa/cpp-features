#include <iostream>
#include <string>
#include <utility>

void process(const std::string &s) { std::cout << "lvalue: " << s << "\n"; }
void process(std::string &&s) { std::cout << "rvalue: " << s << "\n"; }

template <typename T> void wrapper(T &&arg) { process(std::forward<T>(arg)); }

int main() {
  std::string name = "_main";
  // lvalue.
  wrapper(name);
  // rvalue.
  wrapper(std::string("_helper"));
  return 0;
}