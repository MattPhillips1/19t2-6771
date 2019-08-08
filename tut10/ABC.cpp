#include <memory>
#include <iostream>

class A {
 public:
  virtual void f(int) {}
  virtual int g() {return 1;}
  void a() {}
  virtual ~A() {}
};

class B : public A {
 public:
  void f(int) override {std::cout << "hey\n";}
  virtual int h() {return 2;}
  ~B() {
    std::cout << "~B\n";
  }
};

class C : public B {
 public:
  using B::f;
  virtual void f(int, int) {std::cout << "THEREHR\n";}
  virtual void x() {}
  static void b() {}
  ~C() {
    std::cout << "~C\n";
  }
};

int main() {
  std::unique_ptr<C> c = std::make_unique<C>();
  B& b = *c;
  c->f(1, 1);
  c->f(1);
  b.f(1);
}
