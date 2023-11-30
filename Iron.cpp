#include "Iron.h"


void fillIron(Iron& iron) {
    cout << "Enter brand: ";
    cin >> iron.brand;
    cout << "Enter model: ";
    cin >> iron.model;
    cout << "Enter color: ";
    cin >> iron.color;
    cout << "Enter min and max temperature: ";
    cin >> iron.minTemperature >> iron.maxTemperature;
    cout << "Does it have a steam function? (1 for yes, 0 for no): ";
    cin >> iron.steamFunction;
    cout << "Enter power: ";
    cin >> iron.power;
}

void displayIron(const Iron& iron) {
    cout << "Brand: " << iron.brand << "\n";
    cout << "Model: " << iron.model << "\n";
    cout << "Color: " << iron.color << "\n";
    cout << "Min Temperature: " << iron.minTemperature << "\n";
    cout << "Max Temperature: " << iron.maxTemperature << "\n";
    cout << "Steam Function: " << (iron.steamFunction ? "Yes" : "No") << "\n";
    cout << "Power: " << iron.power << "\n";
}
