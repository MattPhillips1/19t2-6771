#include <iostream>

class B {
 public:
  virtual void f() {
    std::cout << "B ";
  }
};

class D : public B {
 public:
  void f() override {
    std::cout << "D ";
  }
};

int main() {
  B b;
  D d;
  b = d; // Object slicing
  B& bref = b;
  D& dref = d;
  B& dbref = d;
  b.f();
  d.f();
  bref.f();
  dref.f();
  dbref.f();
}
