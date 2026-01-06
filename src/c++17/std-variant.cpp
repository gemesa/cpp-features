#include <cstdint>
#include <iostream>
#include <string>
#include <variant>

using SymbolValue = std::variant<uint64_t, std::string>;

int main() {
  // auto&& is a forwarding reference.
  // Same rules as T&& where T is deduced.
  // auto&& a = lvalue; // Deduces to T& (T&& & --> T&).
  // auto&& b = rvalue; // Deduces to T&& (T&& && --> T&&).
  auto printer = [](auto &&arg) {
    // decay_t gives us the type we would get if passed by value (auto x).
    using T = std::decay_t<decltype(arg)>;
    if constexpr (std::is_same_v<T, uint64_t>) {
      std::cout << "Address: 0x" << std::hex << arg << "\n";
    } else if constexpr (std::is_same_v<T, std::string>) {
      std::cout << "Name: " << arg << "\n";
    }
  };

  SymbolValue val = uint64_t{0x10001000};
  std::visit(printer, val);

  val = std::string("_main");
  std::visit(printer, val);

  return 0;
}