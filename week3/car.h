#ifndef TUTORIALS_WEEK3_CAR_H_
#define TUTORIALS_WEEK3_CAR_H_

#include <string>

class Car {
    public:
    Car(): Car{"unknown", 4} {}
    Car(const std::string& manufacturer, int n_seats): manufacturer_{manufacturer}, num_seats_{n_seats} {
        ++n_objects;
    }

    ~Car() noexcept;

    Car(const Car& c) : Car{c.manufacturer_, c.num_seats_} {}
    Car(Car&& c) : manufacturer_{std::move(c.manufacturer_)}, num_seats_{std::move(c.num_seats_)} {
        ++n_objects;
    }

    Car& operator=(const Car& c);
    Car& operator=(Car&& c);

    const std::string& GetManufacturer() const;
    int GetNumSeats() const ;

    static int GetNumCars();

    private:
    std::string manufacturer_;
    int num_seats_;

    static int n_objects;
};

#endif
