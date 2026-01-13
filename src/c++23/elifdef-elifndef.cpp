#include <print>

#ifdef __aarch64__
#define ARCH "ARM64"
#elifdef __x86_64__
#define ARCH "x86_64"
#else
#define ARCH "unknown"
#endif

int main() {
  std::println("Arch: {}", ARCH);
  return 0;
}