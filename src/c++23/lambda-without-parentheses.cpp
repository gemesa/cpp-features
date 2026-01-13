#include <print>
#include <thread>

int main() {
  auto analyzer = [] { std::println("Running analysis."); };

  analyzer();

  return 0;
}