#include <iostream>
#include <vector>

class Buffer {
  std::vector<int> data_ = {1, 2, 3};

public:
  // rvalue.
  const std::vector<int> &data() const & {
    std::cout << "lvalue: returning ref.\n";
    return data_;
  }

  // rvalue.
  std::vector<int> data() && {
    std::cout << "rvalue: moving.\n";
    return std::move(data_);
  }
};

Buffer makeBuffer() { return Buffer{}; }

int main() {
  Buffer b;
  auto &ref = b.data();
  (void)ref;
  auto owned = makeBuffer().data();

  return 0;
}