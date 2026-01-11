#include <cstdint>
#include <iostream>

int main() {
  // https://www.utf8-chartable.de/
  const char8_t *utf8_str = u8"_main\u0023";
  std::cout << "Size: " << sizeof(char8_t) << " byte.\n";
  std::cout << reinterpret_cast<const char *>(utf8_str) << "\n";
  return 0;
}