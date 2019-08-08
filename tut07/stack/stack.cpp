#include "stack.h"

template <typename T>
void Stack<T>::push(T t) {
  stack_.push_back(t);
}

template <typename T>
T Stack<T>::pop() {
  return stack_.pop_back();
}
