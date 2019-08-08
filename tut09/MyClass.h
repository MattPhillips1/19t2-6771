#include <string>

class MyClass {
  public:
    MyClass() : MyClass("Default") {}
    MyClass(const std::string &s) : _name{s}{}

    friend std::ostream& operator<<(std::ostream& os, const MyClass& me){
      os << me._name;
      return os;
    }

  private:
    std::string _name;
};
