#include <iostream>
#include <vector>
#include "queue.h"
#include "ntqueue.h"

int main(){
  Queue<int, 4> t{};
  Queue<int, 5> j{};
  t.enque(97);
  t.enque(97);
  t.enque(0);
  j = t;

  std::cout << t.deque() << ' ' << t.deque() << '\n';
}
