#include <iostream>
#include <utility>

void e(const int& i, int j, int k) {
  std::cout << "1 ";
}

void e(int& i, int j, int k) {
  std::cout << "2 ";
}

template <typename A, typename B, typename C>
void f(A&& a, B &&b, C&& c) {
  e(std::forward<A>(a), std::forward<B>(b), std::forward<C>(c));
}

int k{1};
int g() { return k; }

int main() {
  f(1,2,3);
  const int i{1};
  f(i,2,3);
  const int &j = i;
  f(j,2,3);
  f(g(),2,3);
}
