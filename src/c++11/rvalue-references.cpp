#include <iostream>
#include <string>
#include <vector>

#include "tracked-vector.hpp"

struct Instruction {
  uint64_t address;
  std::string mnemonic;
  std::string operands;
};

class Disassembler {
  TrackedVector<Instruction> cache_;

public:
  // Only accept temporaries or moved-from objects.
  void consumeInstructions(TrackedVector<Instruction> &&instrs) {
    // Move the value.
    cache_ = std::move(instrs);

    std::cout << "Cached " << cache_.size() << " instructions.\n";
  }

  size_t cacheSize() const { return cache_.size(); }
};

TrackedVector<Instruction> disassemble(uint64_t addr) {
  TrackedVector<Instruction> result;
  result.push_back({addr, "mov", "x29, sp"});
  // Do not move here, as it might screw up RVO.
  return result;
}

int main() {
  Disassembler dis;

  // Consuming temporary.
  dis.consumeInstructions(disassemble(0x10000000));

  // Consuming via std::move().
  TrackedVector<Instruction> saved = disassemble(0x10001000);
  dis.consumeInstructions(std::move(saved));

  // Compile error.
  // `an rvalue reference cannot be bound to an lvalue`
  // dis.consumeInstructions(saved);

  return 0;
}