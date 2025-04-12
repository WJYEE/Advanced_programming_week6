#include <iostream>
#include <string>

// InternalClass
class InternalClass {
public:
  std::string fetch() {
    return "get user info";
  }
};

// ExternalClass
class ExternalClass {
public:
  std::string search() {
    return "get user data";
  }
};

// Adapter
class Adapter : public InternalClass {
private:
  ExternalClass* externalClass;

public:
  Adapter(ExternalClass* externalClass) : externalClass(externalClass) {}

  std::string fetch() override {
    return externalClass->search();
  }
};

int main() {
  ExternalClass external;
  Adapter adapter(&external);

  std::cout << adapter.fetch() << std::endl;

  return 0;
}