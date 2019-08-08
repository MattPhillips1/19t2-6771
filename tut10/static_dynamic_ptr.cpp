#include <iostream>
#include <memory>

class B {
 public:
  virtual void f() {
    std::cout << "B ";
  }
  // virtual ~B() = default;
};

class D : public B {
 public:
  void f() override {
    std::cout << "D ";
  }
};

int main() {
  std::unique_ptr<B> b{std::make_unique<B>()};
  D d;
  *b = d;
  B& bref = *b;
  D& dref = d;
  B& dbref = d;
  b->f();
  d.f();
  bref.f();
  dref.f();
  dbref.f();
}
