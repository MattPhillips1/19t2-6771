#include "tutorials/week3/car.h"

// TODO(tutorial): fill me in
#include "tutorials/week3/car.h"

int Car::n_objects = 0;

Car::~Car() noexcept {
    --n_objects;
}

const std::string& Car::GetManufacturer() const {
    return manufacturer_;
}

int Car::GetNumSeats() const {
    return num_seats_;
}

int Car::GetNumCars() {
    return n_objects;
}

Car& Car::operator=(const Car& c){

    this->num_seats_ = c.num_seats_;
    this->manufacturer_ = c.manufacturer_;
    return *this;
}

Car& Car::operator=(Car&& c){
    if (this == &c) return *this;

    this->num_seats_ = std::move(c.num_seats_);
    this->manufacturer_ = std::move(c.manufacturer_);
    return *this;
}
Car a
a = std::move(a)