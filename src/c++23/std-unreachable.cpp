#include <cstdint>
#include <print>
#include <utility>

enum class Arch { ARM64, X86_64 };

const char *archName(Arch a) {
  switch (a) {
  case Arch::ARM64:
    return "arm64";
  case Arch::X86_64:
    return "x86_64";
  }
  std::unreachable();
}

int main() {
  std::println("{}", archName(Arch::ARM64));
  return 0;
}