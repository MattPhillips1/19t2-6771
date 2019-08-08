#ifndef STRINGQUEUE_H_
#define STRINGQUEUE_H_

#include <string>
#include <memory>
#include <algorithm>

template <typename T, int max_size>
class Queue {
 public:
  Queue() : size_curr_{0}, queue_{std::make_unique<T[]>(max_size)} {}
  Queue(const Queue& q) : Queue() {
    size_curr_ = q.size_curr_;
    std::copy(q.queue_.get(), q.queue_.get() + q.size_curr_, queue_.get());
  }
  void enque(T s);
  T deque();
  int size() const;
 private:
  int size_curr_;
  std::unique_ptr<T[]> queue_;
};

template <typename T, int max_size>
void Queue<T, max_size>::enque(T s){
  if (size_curr_ + 1 >= max_size){
    throw std::overflow_error{"FULL"};
  }
  queue_[size_curr_] = s;
  ++size_curr_;
}

template <typename T, int max_size>
T Queue<T, max_size>::deque() {
  if (size_curr_ == 0){
    throw std::logic_error{"Deque from empty"};
  }
  T item = queue_[0];
  for (auto i = 1; i <= size_curr_; ++i){
    queue_[i-1] = queue_[i];
  }
  --size_curr_;
  return item;
}

template <typename T, int max_size>
int Queue<T, max_size>::size() const {
  return size_curr_;
}

#endif  // STRINGQUEUE_H_
