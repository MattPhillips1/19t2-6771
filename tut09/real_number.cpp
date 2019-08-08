#include <iostream>

// template <typename T>
// struct is_real_number {
//   static constexpr bool value = std::is_integral<T>::value || std::is_floating_point<T>::value;
// };

template <typename T>
using is_real_number = std::is_arithmetic<T>;

template <typename T>
void is_real(T i){
  if (is_real_number<T>::value) {
    std::cout << "Is real number" << "\n";
  }else{
    std::cout << "Not real num\n";
  }
  (void)i;
}

int main() {
  is_real("hey");
  is_real(5);
}
