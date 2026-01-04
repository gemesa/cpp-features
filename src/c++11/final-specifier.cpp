#include <iostream>

struct Validator {
  virtual bool validate() { return false; }
};

struct SignatureValidator : Validator {
  bool validate() override final { return true; }
};

struct ExtendedBalidator : SignatureValidator {
  // cannot override 'final' function "SignatureValidator::validate"
  // bool validate() override {}
};

struct SecureValidator final : Validator {
  bool validate() override { return true; }
};

// a 'final' class type cannot be used as a base class
// struct ExtendedSecureValidator : SecureValidator {};

int main() {
  SignatureValidator v;
  std::cout << "Valid: " << std::boolalpha << v.validate() << "\n";
  return 0;
}