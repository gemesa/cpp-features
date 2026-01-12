#include <cstdint>
#include <iostream>
#include <thread>
#include <vector>

#if __has_include(<syncstream>)
#include <syncstream>
#define HAS_SYNCSTREAM 1
#else
// Fallback for macOS.
#include <mutex>
#define HAS_SYNCSTREAM 0
std::mutex cout_mutex;
#endif

void analyzeSegment(uint64_t addr, const char *name) {
#if HAS_SYNCSTREAM
  std::osyncstream{std::cout} << "Thread " << std::this_thread::get_id()
                              << ": analyzing " << name << " @ 0x" << std::hex
                              << addr << "\n";
#else
  std::lock_guard lock(out_mutex);
  std::cout << "Thread " << std::this_thread::get_id() << ": analyzing " << name
            << " @ 0x" << std::hex << addr << "\n";
#endif
}

int main() {
  std::vector<std::jthread> threads;

  threads.emplace_back(analyzeSegment, 0x10001000, "__TEXT");
  threads.emplace_back(analyzeSegment, 0x10002000, "__DATA");
  threads.emplace_back(analyzeSegment, 0x10003000, "__LINKEDIT");

  return 0;
}