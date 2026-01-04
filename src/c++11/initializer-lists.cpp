#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>

struct ImportPattern {
  std::string dylib;
  std::vector<std::string> functions;

  ImportPattern(std::string d, std::initializer_list<std::string> funcs)
      : dylib(std::move(d)), functions(funcs) {}
};

void checkSuspiciousImports(std::initializer_list<ImportPattern> patterns) {
  std::cout << "Checking " << patterns.size() << " suspicious patterns:\n";
  for (const auto &p : patterns) {
    std::cout << "  " << p.dylib << ": ";
    for (const auto &f : p.functions) {
      std::cout << f << " ";
    }
    std::cout << "\n";
  }
}

int main() {
  // Outer: std::initializer_list<ImportPattern>
  // Middle: constructor call via braces
  // Inner: std::initializer_list<std::string>
  checkSuspiciousImports({{"libSystem.B.dylib", {"ptrace", "sysctl"}}});
  return 0;
}