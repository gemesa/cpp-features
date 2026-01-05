#include <cstdint>
#include <iostream>
#include <string>

int main() {
  int segments = 4;
  size_t symbols = 127;

  std::string msg = "Found " + std::to_string(segments) + " segments, " +
                    std::to_string(symbols) + " symbols.";

  std::cout << msg << "\n";

  return 0;
}