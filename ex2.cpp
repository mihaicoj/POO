#include <iostream>

class Vehicle {
public:
    void start() {
        std::cout << "Vehicle starts" << std::endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        std::cout << "Car honks" << std::endl;
    }
};

int main() {
    Car myCar;

    myCar.start();

    myCar.honk();

    return 0;
}
