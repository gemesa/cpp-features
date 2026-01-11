#include <cstdint>
#include <iostream>

// https://en.wikipedia.org/wiki/Mach-O
struct MachHeader64 {
  uint32_t magic;
  uint32_t cputype;
  uint32_t cpusubtype;
  uint32_t filetype;
  uint32_t numofcmds;
  uint32_t sizeofcmds;
  uint32_t flags;
  uint32_t reserved;
};

int main() {
  MachHeader64 hdr{
      .magic = 0xFEEDFACF,
      .filetype = 0x2, // MH_EXECUTE
  };

  std::cout << "Magic: 0x" << std::hex << hdr.magic << "\n";
  std::cout << "Num of cmds: " << std::dec << hdr.numofcmds << "\n";

  return 0;
}
