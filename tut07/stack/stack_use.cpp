#include <iostream>

#include "stack.h"

int main() {
  Stack<int> is1;
  is1.push(5);
  std::cout << is1.pop() << "\n";
}
