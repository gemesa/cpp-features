#include <cstdint>
#include <iostream>

// C enum
// enum OldFileType { Executable = 2, Dylib = 6};

// enum class
// https://en.wikipedia.org/wiki/Mach-O
enum class FileType : uint32_t { Executable = 2, Dylib = 6 };
enum class CPUType : uint32_t { X86_64 = 0x01000007, ARM64 = 0x0100000C };

int main() {

  FileType ft = FileType::Executable;
  // CPUType cpu = CPUType::ARM64;

  // a value of type "FileType" cannot be used to initialize an entity of type
  // "int" int y = ft;
  // no operator "==" matches these operands
  // if (ft == cpu) {}
  // no operator "==" matches these operands
  // if (ft == 2) {}

  uint32_t raw = static_cast<uint32_t>(ft);
  std::cout << "FileType raw value: " << raw << "\n";

  return 0;
}