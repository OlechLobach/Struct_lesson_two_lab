#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include <iostream>
#include <string>
using namespace std;


struct WashingMachine {
    string brand;
    string color;
    double width;
    double length;
    double height;
    double power;
    double spinSpeed;
    double heatingTemperature;
};

void fillWashingMachine(WashingMachine& machine);
void displayWashingMachine(const WashingMachine& machine);

#endif 

