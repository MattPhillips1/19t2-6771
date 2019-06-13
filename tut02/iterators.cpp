#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <iterator>

int main(){
  const std::vector<int> vec;
  std::list<int> li;
  std::forward_list<double> forward_li;
  std::string s;

  vec.begin();
  vec.cbegin();
  (*vec.begin())++;
  li.cbegin();
  li.rbegin();
  forward_li.cbegin();
  (*forward_li.cbegin())++;
  forward_li.crbegin();
  s.begin();
  std::back_inserter(vec);
  std::back_inserter(li);
  std::istream_iterator<int>(std::cin);
  std::ostream_iterator<int>(std::cout, " ");
}
