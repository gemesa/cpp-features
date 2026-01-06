#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std::chrono_literals;

void analyzeWithTimeout(std::chrono::milliseconds timeout) {
  std::cout << "Timeout: " << timeout.count() << "ms\n";
}

int main() {
  auto analysisTimeout = 500ms;
  auto longTimeout = 2s;

  analyzeWithTimeout(analysisTimeout);
  analyzeWithTimeout(longTimeout);

  return 0;
}