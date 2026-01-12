#include <concepts>
#include <cstdint>
#include <iostream>

// https://en.cppreference.com/w/cpp/concepts.html#Standard_library_concepts
template <std::integral T> T alignTo(T value, T alignment) {
  // https://en.wikipedia.org/wiki/Data_structure_alignment
  // aligned = (offset + (align - 1)) & ~(align - 1)
  return (value + alignment - 1) & ~(alignment - 1);
}

template <std::invocable<uint64_t> F>
void forEachAddress(uint64_t start, uint64_t end, uint64_t step, F callback) {
  for (uint64_t addr = start; addr < end; addr += step) {
    callback(addr);
  }
}

struct Instruction {
  virtual ~Instruction() = default;
};
struct BranchInstr : Instruction {};

template <std::derived_from<Instruction> T> void analyze(const T &instr) {
  std::cout << "Analyzing instruction.\n";
}

int main() {
  std::cout << "Aligned: 0x" << std::hex << alignTo(0x1234, 0x1000) << "\n";

  forEachAddress(0x1000, 0x1010, 4, [](uint64_t addr) {
    std::cout << "0x" << std::hex << addr << "\n";
  });

  BranchInstr br;
  analyze(br);

  return 0;
}