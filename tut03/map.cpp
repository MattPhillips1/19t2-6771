#include <unordered_map>
#include <iostream>

int main(){
  std::unordered_map<int, int> m{{1,1},{2,2}};
  auto i = m.begin();
  std::cout << typeid(std::iterator_traits<decltype(i)>::iterator_category()).name() << '\n';
}
