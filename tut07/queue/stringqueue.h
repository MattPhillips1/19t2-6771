#ifndef STRINGQUEUE_H_
#define STRINGQUEUE_H_

#include <string>
#include <memory>

class StringQueue {
 public:
  StringQueue(int size) : size_curr_{0}, size_max_{size}, queue_{std::make_unique<std::string[]>(size)} {}
  void enque(std::string s);
  std::string deque();
  int size() const;
 private:
  int size_curr_;
  int size_max_;
  std::unique_ptr<std::string[]> queue_;
};

#endif  // STRINGQUEUE_H_
