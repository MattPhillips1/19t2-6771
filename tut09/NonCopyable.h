#include <string>

class NonCopyable {
  public:
    NonCopyable(const std::string &s) : _name{s}{}
    NonCopyable(const NonCopyable& o) = delete;
    NonCopyable(NonCopyable&& o) : _name{std::move(o._name)}{}

    friend std::ostream& operator<<(std::ostream& os, const NonCopyable& me){
      os << me._name;
      return os;
    }

  private:
    std::string _name;
};
