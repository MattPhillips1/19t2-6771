class Base {
 // protected:
 //  int i_;
 private:
  int i_;
};

class Derived : public Base {
 public:
  void foo(Derived& o) {
    j_ = o.i_ + o.j_;
  }
 private:
  int j_;
};

int main(){
  return 0;
}
