#include <chrono>
#include <iostream>
#include <thread>

int main() {
  using namespace std::chrono;

  auto start = high_resolution_clock::now();
  std::this_thread::sleep_for(1500ms);
  auto end = high_resolution_clock::now();

  auto elapsed = end - start;

  std::cout << "floor: " << floor<seconds>(elapsed).count() << "s.\n";
  std::cout << "ceil: " << ceil<seconds>(elapsed).count() << "s.\n";
  std::cout << "round: " << round<seconds>(elapsed).count() << "s.\n";
  std::cout << "exact: " << round<milliseconds>(elapsed).count() << "ms.\n";

  return 0;
}