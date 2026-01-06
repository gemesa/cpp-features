#include <cstdint>
#include <iostream>
#include <tuple>
#include <utility>

void printSegment(const char *name, uint64_t addr, uint64_t size) {
  std::cout << name << " @ 0x" << std::hex << addr << " (size: 0x" << size
            << ")\n";
}

// Step 2: I... is 0, 1, 2 for a tuple with 3 elements.
template <typename Tuple, std::size_t... I>
void callImpl(Tuple &&t, std::index_sequence<I...>) {
  // std::get<I>(t) expands to: std::get<0>(t), std::get<1>(t), std::get<2>(t).
  printSegment(std::get<I>(std::forward<Tuple>(t))...);
}

// Step 1: create index sequence from tuple size.
template <typename Tuple> void callWithTuple(Tuple &&t) {
  // make_index_sequence<3>{} creates index_sequence<0, 1, 2>.
  // decay_t strips the reference.
  callImpl(
      t,
      std::make_index_sequence<std::tuple_size<std::decay_t<Tuple>>::value>{});
}

int main() {
  auto seg = std::make_tuple("__TEXT", 0x10000000, 0x4000);
  // Unpacks to: printSegment("__TEXT", 0x10000000, 0x4000);
  callWithTuple(seg);
  return 0;
}