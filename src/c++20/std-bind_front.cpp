#include <cstdint>
#include <functional>
#include <iostream>

void log(const char *level, uint64_t addr, const char *msg) {
  std::cout << "[" << level << "] 0x" << std::hex << addr << ": " << msg
            << "\n";
}

int main() {
  auto logError = std::bind_front(log, "ERROR");
  auto logInfo = std::bind_front(log, "INFO");

  logError(0x10001000, "Invalid instruction.");
  logInfo(0x10001000, "Entry point.");

  return 0;
}