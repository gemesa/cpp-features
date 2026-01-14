#include <print>
#include <string>

int main() {
  std::string symbol = "_OBJC_CLASS_$_NSObject";

  // Before C++23:
  // if (symbol.find("OBJC") != std::string::npos) {}

  // C++23:
  if (symbol.contains("OBJC")) {
    std::println("Objective-C symbol.");
  }

  return 0;
}