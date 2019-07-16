#include <iostream>
#include <utility>

#include "tutorials/week3/car.h"

int main() {
  Car one;
  Car two{"Toyota", 5};

  std::cout << Car::GetNumCars() << std::endl;

  Car three{two};
  std::cout << Car::GetNumCars() << std::endl;

  Car four = std::move(one);
  std::cout << Car::GetNumCars() << std::endl;

  Car five{std::move(two)};
  std::cout << Car::GetNumCars() << std::endl;

  three = five;
  std::cout << Car::GetNumCars() << std::endl;

  four = std::move(five);
  std::cout << Car::GetNumCars() << std::endl;
}
