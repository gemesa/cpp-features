#include <cstdint>
#include <iostream>
#include <map>

int main() {
  std::map<uint64_t, const char *> text = {{0x1000, "_main"},
                                           {0x1100, "_helper"}};

  std::map<uint64_t, const char *> data = {{0x2000, "_global"},
                                           {0x2100, "_buffer"}};

  data.insert(text.extract(0x1100));

  data.merge(text);

  std::cout << "text size: " << text.size() << "\n";
  std::cout << "data size: " << data.size() << "\n";

  for (const auto &[addr, name] : data) {
    std::cout << "0x" << std::hex << addr << ": " << name << "\n";
  }

  return 0;
}