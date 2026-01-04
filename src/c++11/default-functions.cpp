#include <iostream>
#include <string>
#include <vector>

class DisassemblyResult {
  std::vector<std::string> instructions;

public:
  DisassemblyResult() = default;

  ~DisassemblyResult() {
    std::cout << "Cleanup: " << instructions.size() << " instructions.\n";
  }

  // Copy constructor.
  DisassemblyResult(const DisassemblyResult &) = default;
  // Copy assignment.
  DisassemblyResult &operator=(const DisassemblyResult &) = default;
  // Move constructor.
  DisassemblyResult(DisassemblyResult &&) = default;
  // Move assignment.
  DisassemblyResult &operator=(DisassemblyResult &&) = default;

  void add(const std::string &s) { instructions.push_back(s); }
  size_t count() const { return instructions.size(); }
};

int main() {
  DisassemblyResult a;
  a.add("stp x29, x30, [sp, #-16]!");
  a.add("mov x29, sp");

  DisassemblyResult b = a;
  DisassemblyResult c = std::move(a);

  std::cout << "a: " << a.count() << ", b: " << b.count() << ", c:" << c.count()
            << "\n";

  return 0;
}