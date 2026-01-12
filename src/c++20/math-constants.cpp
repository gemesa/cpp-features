#include <iostream>
#include <numbers>

int main() {
  double radius = 16.0;
  double circumference = 2 * std::numbers::pi * radius;

  std::cout << "Circumference: " << circumference << "\n";

  return 0;
}