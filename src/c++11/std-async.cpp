#include <future>
#include <iostream>

int analyze(const char *segment) {
  std::cout << "Analyzing " << segment << "\n";
  return 100;
}

int main() {
  auto f1 = std::async(std::launch::async, analyze, "__TEXT");
  auto f2 = std::async(std::launch::async, analyze, "__DATA");

  int r1 = f1.get();
  int r2 = f2.get();

  std::cout << "Results: " << r1 << ", " << r2 << "\n";

  return 0;
}