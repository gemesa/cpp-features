#include <functional>
#include <iostream>
#include <thread>

void analyze(int &counter) { counter++; }

int main() {
  int count = 0;
  std::thread t(analyze, std::ref(count));
  t.join();

  std::cout << "Count: " << count << "\n";

  return 0;
}