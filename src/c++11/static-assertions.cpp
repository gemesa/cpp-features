#include <cstdint>
#include <iostream>

// https://stackoverflow.com/questions/21092415/force-c-structure-to-pack-tightly
// https://en.wikipedia.org/wiki/Mach-O
struct __attribute__((packed)) MachHeader64 {
  uint32_t magic;
  uint32_t cputype;
  uint32_t cpusubtype;
  uint32_t filetype;
  uint32_t numofcmds;
  uint32_t sizeofcmds;
  uint32_t flags;
  uint32_t reserved;
};

static_assert(sizeof(MachHeader64) == 32, "MachHeader64 must be 32 bytes.");

int main() {
  std::cout << "MachHeader64 size: " << sizeof(MachHeader64) << " bytes\n";
  std::cout << "All static assertions passed at compile time.\n";
  return 0;
}