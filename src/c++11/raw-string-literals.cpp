#include <iostream>
#include <string>

int main() {
  std::string pattern1 = "\\xFD\\x7B\\xBF\\xA9";
  std::string pattern2 = R"(\xFD\x7B\xBF\xA9)";

  std::cout << "Escaped: " << pattern1 << "\n";
  std::cout << "Raw:     " << pattern2 << "\n";

  std::string rule = R"(
rule MachO {
    strings: $magic = { CE FA ED FE }
}
    )";

  std::cout << rule << "\n";

  return 0;
}