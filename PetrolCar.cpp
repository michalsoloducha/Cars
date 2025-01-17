#include "PetrolCar.hpp"
#include <iostream>

PetrolCar::PetrolCar(PetrolEngine* engine)
    : petrolEngine_(engine) {
    std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar() {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::turnLeft() {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::turnRight() {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::brake() {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::accelerate(int) {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::refuel() {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::changeGear(int gear) {
    std::cout << __FUNCTION__ << std::endl;
    petrolEngine_->changeGear(gear);
}
