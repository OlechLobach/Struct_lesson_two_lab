#include <iostream>
#include "WashingMachine.h"
#include "Iron.h"
#include "Boiler.h"
#include "Animal.h"

int main() {
    int choice;

    do {
       cout << "Choose an option:\n"
            << "1. Washing Machine\n"
            << "2. Iron\n"
            << "3. Boiler\n"
            << "4. Animal\n"
            << "5. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1: {
            WashingMachine wm;
            fillWashingMachine(wm);
            displayWashingMachine(wm);
            break;
        }
        case 2: {
            Iron iron;
            fillIron(iron);
            displayIron(iron);
            break;
        } 
        case 3: {
            Boiler boiler;
            fillBoiler(boiler);
            displayBoiler(boiler);
            break;
        }
        case 4: {
            Animal animal;
            fillAnimal(animal);
            displayAnimal(animal);
            makeSound(animal);
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 5);

    return 0;
}
