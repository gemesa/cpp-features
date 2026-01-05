#include <iostream>
#include <memory>

struct Symbol {
  const char *name;
  Symbol(const char *n) : name(n) { std::cout << "Created.\n"; }
  ~Symbol() { std::cout << "Destroyed.\n"; }
};

int main() {
  auto sym = std::make_shared<Symbol>("_main");
  auto copy = sym;
  std::cout << "Ref count: " << sym.use_count() << "\n";
  return 0;
}