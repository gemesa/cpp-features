#include <iostream>
#include <utility>
#include <vector>

struct Segment {
  std::string name;
  std::vector<uint8_t> data;

  Segment(const std::string &n, size_t size) : name(n), data(size, 0xFF) {
    std::cout << "Constructed segment: " << name << " (" << size
              << " bytes).\n";
  }

  // Move constructor.
  Segment(Segment &&other) noexcept
      : name(std::move(other.name)), data(std::move(other.data)) {
    std::cout << "Moved segment.\n";
  }

  // Copy constructor.
  Segment(const Segment &other) : name(other.name), data(other.data) {
    std::cout << "Copied segment.\n";
  }
};

Segment loadSegment() {
  Segment seg("__TEXT", 1024 * 1024);
  // Do not move here, as it might screw up RVO.
  return seg;
}

int main() {
  std::cout << "Loading segment.\n";
  Segment text = loadSegment();

  std::cout << "Transferring to analyzer.\n";
  Segment analyzer_seg = std::move(text);

  std::cout << "Original segment name: " << text.name << "\n";
  std::cout << "Analyzer segment name: " << analyzer_seg.name << "\n";

  return 0;
}
