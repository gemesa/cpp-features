#include <cstdint>
#include <iostream>

int main() {
  char16_t utf16[] = u"MZ";
  (void)utf16;
  char32_t utf32[] = U"MZ";
  (void)utf32;

  std::cout << "UTF-16 element size: " << sizeof(char16_t) << " bytes.\n";
  std::cout << "UTF-32 element size: " << sizeof(char32_t) << " bytes.\n";

  return 0;
}