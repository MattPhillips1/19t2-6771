#include <iostream>


template <typename T>
T max(T a, T b) {
  return a*b;
}

template <typename Q>
Q max(Q a, Q b) {
  return a - b;
}

int main() {
  int result = 7;
  max(1, 2);
  max(1.1, 2.2);
  max(1.0, 2.0);
  max('a', 'z');
  max(7, result);
  // max("cat", "dog");
}
