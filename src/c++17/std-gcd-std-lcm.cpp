#include <iostream>
#include <numeric>

int main() {
  size_t len1 = 48;
  size_t len2 = 64;
  size_t len3 = 80;

  auto blockSize = std::gcd(std::gcd(len1, len2), len3);
  std::cout << "Block size: " << blockSize << " bytes.\n";

  size_t key1Len = 7;
  size_t key2Len = 5;

  auto period = std::lcm(key1Len, key2Len);
  std::cout << "Pattern repeats every " << period << " bytes.\n";

  return 0;
}