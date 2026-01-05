#include <iostream>

struct Analyzer {
  virtual void analyze() { std::cout << "Running base analyzer.\n"; }
};

struct MachOAnalyzer : Analyzer {
  void analyze() override { std::cout << "Running MachO analyzer.\n"; }

  // member function declared with 'override' does not override a base class member
  // void analize() override {}
};

int main() {
  MachOAnalyzer m;
  m.analyze();
  return 0;
}