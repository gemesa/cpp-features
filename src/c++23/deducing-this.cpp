#include <cstdint>
#include <print>
#include <vector>

class Section {
  std::vector<uint8_t> data_;

public:
  Section(std::initializer_list<uint8_t> d) : data_(d) {}

  // Before C++23: needed const and non-const overloads.
  // uint8_t* data() { return data_.data(); }
  // const uint8_t* data() const { return data_.data(); }

  // C++23: one function handles both.
  // Instead of an implicit this pointer,
  // we declare the object parameter explicitly.
  // The compiler deduces Self based on how we call it.
  // When the argument is an lvalue:
  // Self&& --> Section& && --> Section&
  // When the argument is an rvalue:
  // Self&& --> Section&&
  // auto&& follows the same reference collapsing rules.
  template <typename Self> auto &&data(this Self &&self) {
    // std::forward preserves the value category (lvalue/rvalue) and constness.
    return std::forward<Self>(self).data_;
  }
};

int main() {
  // https://en.wikipedia.org/wiki/Mach-O
  Section sec{0xCF, 0xFA, 0xED, 0xFE};
  const Section csec{0xCF, 0xFA, 0xED, 0xFE};

  sec.data()[0] = 0xFF;
  auto b = csec.data()[0];

  std::println("{:#x}", b);

  return 0;
}