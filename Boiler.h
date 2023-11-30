#ifndef BOILER_H
#define BOILER_H
#include <iostream>
#include <string>
using namespace std;


struct Boiler {
    string brand;
    string color;
    double power;
    double volume;
    double heatingTemperature;
};

void fillBoiler(Boiler& boiler);
void displayBoiler(const Boiler& boiler);

#endif 
