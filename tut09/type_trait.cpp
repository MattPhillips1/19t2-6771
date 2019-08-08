#include <iostream>
namespace traits{
  template <typename T>
  struct is_a_pointer {
    static constexpr bool value = false;
  };

  template <typename T>
  struct is_a_pointer<T*> {
    static constexpr bool value = true;
  };
}

template <typename T>
void printPointer(T t) {
  if constexpr (traits::is_a_pointer<T>::value) {
  	std::cout << *t << "\n";
  } else {
  	std::cout << t << "\n";
  }
}

int main() {
  int i = 4;
  // int *t = &i;
  printPointer(i);
}
