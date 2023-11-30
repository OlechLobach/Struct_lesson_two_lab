#include "WashingMachine.h"


void fillWashingMachine(WashingMachine& machine) {
    cout << "Enter brand: ";
    cin >> machine.brand;
    cout << "Enter color: ";
    cin >> machine.color;
    cout << "Enter width, length, height: ";
    cin >> machine.width >> machine.length >> machine.height;
    cout << "Enter power, spin speed, heating temperature: ";
    cin >> machine.power >> machine.spinSpeed >> machine.heatingTemperature;
}

void displayWashingMachine(const WashingMachine& machine) {
    cout << "Brand: " << machine.brand << "\n";
    cout << "Color: " << machine.color << "\n";
    cout << "Width: " << machine.width << "\n";
    cout << "Length: " << machine.length << "\n";
    cout << "Height: " << machine.height << "\n";
    cout << "Power: " << machine.power << "\n";
    cout << "Spin Speed: " << machine.spinSpeed << "\n";
    cout << "Heating Temperature: " << machine.heatingTemperature << "\n";
}
