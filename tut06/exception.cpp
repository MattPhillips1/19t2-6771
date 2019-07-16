#include <iostream>
#include <memory>

class NamedIntPointer {
  public:
    NamedIntPointer(int value, const std::string& name):
        ptr_{new int{value}}, name_{name} {
      if (name.empty()) {
        throw std::invalid_argument{"The int pointer must be named"};
      }
    }

    ~NamedIntPointer() {
      delete ptr_;
    }
  private:
    int* ptr_;
    std::string name_;
};


int main() {
  auto t = NamedIntPointer(1, "a");
}
