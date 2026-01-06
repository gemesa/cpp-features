#include <cstdint>
#include <iostream>
#include <memory>

// https://en.wikipedia.org/wiki/Mach-O
struct LoadCommand {
  uint32_t cmd;
  uint32_t size;

  LoadCommand(uint32_t c, uint32_t s) : cmd(c), size(s) {
    std::cout << "Created LC 0x" << std::hex << cmd << "\n";
  }

  ~LoadCommand() { std::cout << "Destroyed LC 0x" << std::hex << cmd << "\n"; }
};

int main() {
  auto segment = std::make_unique<LoadCommand>(0x19, 72);
  std::cout << "Segment size: " << std::dec << segment->size << "\n";

  return 0;
}