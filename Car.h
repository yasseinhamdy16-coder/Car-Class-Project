//car.h
#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    int speed;

public:

    Car(string make, string model, int year);


    void accelerate(int increment);
    void brake(int decrement);
    void displayCarInfo();


    string getMake();
    string getModel();
    int getYear();
    int getSpeed();
};

#endif
