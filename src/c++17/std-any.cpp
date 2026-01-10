#include <any>
#include <cstdint>
#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<std::string, std::any> symInfo;

  symInfo.emplace("address", uint64_t{0x10001000});
  symInfo.emplace("name", std::string{"_main"});
  symInfo.emplace("isExported", true);

  std::cout << "Address: 0x" << std::hex
            << std::any_cast<uint64_t>(symInfo["address"]) << "\n";
  // https://itanium-cxx-abi.github.io/cxx-abi/abi.html#mangling-builtin
  std::cout << "Address type: " << symInfo["address"].type().name() << "\n";
  std::cout << "Name: " << std::any_cast<std::string>(symInfo["name"]) << "\n";

  return 0;
}