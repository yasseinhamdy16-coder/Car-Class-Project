//main.cpp

#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    string make, model;
    int year;


    cout << "Enter car make: ";
    getline(cin, make);

    cout << "Enter car model: ";
    getline(cin, model);

    cout << "Enter car year: ";
    cin >> year;

    Car myCar(make, model, year);

    cout << "\nInitial Car Info:\n";
    myCar.displayCarInfo();

    int choice = -1;
    int value;


    while (choice != 0) {
        cout << "\n--- Car Menu ---\n";
        cout << "1. Accelerate\n";
        cout << "2. Brake\n";
        cout << "3. Show Car Info\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter speed to increase: ";
            cin >> value;
            myCar.accelerate(value);
        }
        else if (choice == 2) {
            cout << "Enter speed to decrease: ";
            cin >> value;
            myCar.brake(value);
        }
        else if (choice == 3) {
            myCar.displayCarInfo();
        }
        else if (choice == 0) {
            cout << "Exiting program.\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
