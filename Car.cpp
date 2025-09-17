

//car.cpp
#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string make, string model, int year)
    : make(make), model(model), year(year), speed(0) {}


void Car::accelerate(int increment) {
    speed += increment;
    cout << "Accelerating... Current speed: " << speed << " mph" << endl;
}

void Car::brake(int decrement) {
    speed -= decrement;
    if (speed < 0) {
        speed = 0;
    }
    cout << "Braking... Current speed: " << speed << " mph" << endl;
}

void Car::displayCarInfo() {
    cout << "Car Info: " << year << " " << make << " " << model << endl;
    cout << "Current Speed: " << speed << " mph" << endl;
}

string Car::getMake() {
    return make;
}

string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}

int Car::getSpeed() {
    return speed;
}
