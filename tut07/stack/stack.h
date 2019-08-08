#ifndef LECTURES_WEEK7_STACK_H_
#define LECTURES_WEEK7_STACK_H_

#include <vector>
#include <iostream>

template <typename T>
class Stack {
 public:
  void push(T);
  T pop();
  friend std::ostream& operator<< (std::ostream& os, const Stack& s) {}
 private:
  std::vector<T> stack_;
};

#endif  // LECTURES_WEEK7_STACK_H_
