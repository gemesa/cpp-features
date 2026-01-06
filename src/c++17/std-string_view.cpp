#include <iostream>
#include <string_view>

void parseSymbol(std::string_view sym) {
  if (sym.substr(0, 1) == "_") {
    sym.remove_prefix(1);
  }
  std::cout << "Symbol: " << sym << "\n";
}

int main() {
  // From literal.
  parseSymbol("_main");

  std::string s = "_helper";
  // From std::string.
  parseSymbol(s);

  char buf[] = "_func";
  // From array.
  parseSymbol({buf, 5});

  return 0;
}