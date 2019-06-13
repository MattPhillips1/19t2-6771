#include <iostream>
#include <list>

int main() {
  std::list studentMarks;
  studentMarks.push_back(63);
  studentMarks.push_back(67);
  studentMarks.push_back(69);
  studentMarks.push_back(74);
  studentMarks.push_back(82);

  std::cout << "Median: " << studentMarks[2] << "\n";
}
