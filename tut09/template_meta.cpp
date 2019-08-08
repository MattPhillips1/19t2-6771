#include <iostream>

template <int n>
struct Factorial {
  static constexpr int val = Factorial<n-1>::val * n;
};

template <>
struct Factorial<0> {
  static constexpr int val = 1;
};

constexpr int factorial (int n) {
  if (n <= 1) {
  	return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  static_assert(factorial(3) == 6);
  static_assert(Factorial<3>::val == 6);
  std::cout << factorial(6) << std::endl;
}
