#include <iostream>
#include <utility>

void e(const int& i, int& j, int k) {
  std::cout << "1 ";
}

void e(int& i, const int& j, int k) {
  std::cout << "2 ";
}

template <typename A, typename B, typename C>
void f(A&& a, B &&b, C&& c) {
  e(std::forward<A>(a), std::forward<B>(b), std::forward<C>(c));
}

int k{1};
int g() { return k; }

int main() {
  int i{1};
  int &j = i;
  int &l = k;
  f(j,l,3);
}
