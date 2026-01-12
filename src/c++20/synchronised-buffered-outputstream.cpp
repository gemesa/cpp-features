#include <cstdint>
#include <iostream>
#include <syncstream>
#include <thread>
#include <vector>

void analyzeSegment(uint64_t addr, const char *name) {
  std::osyncstream{std::cout} << "Thread " << std::this_thread::get_id()
                              << ": analyzing " << name << " @ 0x" << std::hex
                              << addr << "\n";
}

int main() {
  std::vector<std::jthread> threads;

  threads.emplace_back(analyzeSegment, 0x10001000, "__TEXT");
  threads.emplace_back(analyzeSegment, 0x10002000, "__DATA");
  threads.emplace_back(analyzeSegment, 0x10003000, "__LINKEDIT");

  return 0;
}