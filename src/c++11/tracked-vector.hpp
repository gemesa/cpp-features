#ifndef TRACKED_VECTOR_HPP
#define TRACKED_VECTOR_HPP

#include <iostream>
#include <vector>

template <typename T> class TrackedVector {
  std::vector<T> data_;

public:
  TrackedVector() = default;

  TrackedVector(std::initializer_list<T> init) : data_(init) {}

  // Copy constructor.
  TrackedVector(const TrackedVector &other) : data_(other.data_) {
    std::cout << "Copy constructor called.\n";
  }

  // Move constructor.
  TrackedVector(TrackedVector &&other) noexcept
      : data_(std::move(other.data_)) {
    std::cout << "Move constructor called.\n";
  }

  // Copy assignment.
  TrackedVector &operator=(const TrackedVector &other) {
    std::cout << "Copy assignment.\n";
    data_ = other.data_;
    return *this;
  }

  // Move assignment.
  TrackedVector &operator=(TrackedVector &&other) noexcept {
    std::cout << "Move assignment.\n";
    data_ = std::move(other.data_);
    return *this;
  }

  typename std::vector<T>::const_iterator begin() const {
    return data_.begin();
  }
  typename std::vector<T>::const_iterator end() const { return data_.end(); }
  size_t size() const { return data_.size(); }
  void push_back(const T &val) { data_.push_back(val); }
};

#endif // TRACKED_VECTOR_HPP