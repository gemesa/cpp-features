#include <cstdint>
#include <iostream>

void analyze(uint64_t addr) {
  std::cout << "Analyzing address: 0x" << std::hex << addr << "\n";
}

void analyze(const char *symbol) {
  if (symbol) {
    std::cout << "Analyzing symbol: " << symbol << "\n";
  } else {
    std::cout << "Analyzing symbol: (null)\n";
  }
}

int main() {
  analyze(0x10001000);
  analyze("_main");

  // more than one instance of overloaded function "analyze" matches the
  // argument list
  //
  // function "analyze(uint64_t addr)"
  //
  // function "analyze(const char *symbol)"
  //
  // analyze(NULL);
  analyze(nullptr);

  return 0;
}