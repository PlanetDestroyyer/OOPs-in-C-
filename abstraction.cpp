#include <iostream>
#include <string>

namespace Vehicles {
    // Abstract class representing a vehicle
    class Vehicle {
    public:
        // Pure virtual function to drive the vehicle
        virtual void drive() const = 0;
    };

    // Concrete class representing a car
    class Car : public Vehicle {
    public:
        void drive() const override {
            std::cout << "Car is being driven!" << std::endl;
        }
    };

    // Concrete class representing a bicycle
    class Bicycle : public Vehicle {
    public:
        void drive() const override {
            std::cout << "Bicycle is being ridden!" << std::endl;
        }
    };
}

int main() {
    Vehicles::Car car;
    Vehicles::Bicycle bicycle;

    car.drive(); // Drive the car
    bicycle.drive(); // Ride the bicycle

    return 0;
}
