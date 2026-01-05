#include <chrono>
#include <iostream>

void analyze() {
  volatile int sum = 0;
  for (int i = 0; i < 1000000; ++i) {
    sum += i;
  }
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  analyze();
  auto end = std::chrono::high_resolution_clock::now();

  auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  auto us = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

  std::cout << "Elapsed: " << ms.count() << " ms (" << us.count() << " us).\n";

  return 0;
}