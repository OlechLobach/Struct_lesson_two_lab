#include "Boiler.h"


void fillBoiler(Boiler& boiler) {
    cout << "Enter brand: ";
    cin >> boiler.brand;
    cout << "Enter color: ";
    cin >> boiler.color;
    cout << "Enter power: ";
    cin >> boiler.power;
    cout << "Enter volume: ";
    cin >> boiler.volume;
    cout << "Enter heating temperature: ";
    cin >> boiler.heatingTemperature;
}

void displayBoiler(const Boiler& boiler) {
    cout << "Brand: " << boiler.brand << "\n";
    cout << "Color: " << boiler.color << "\n";
    cout << "Power: " << boiler.power << "\n";
    cout << "Volume: " << boiler.volume << "\n";
    cout << "Heating Temperature: " << boiler.heatingTemperature << "\n";
}
