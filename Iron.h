#ifndef IRON_H
#define IRON_H
#include <iostream>
#include <string>
using namespace std;


struct Iron {
    string brand;
    string model;
    string color;
    double minTemperature;
    double maxTemperature;
    bool steamFunction;
    double power;
};

void fillIron(Iron& iron);
void displayIron(const Iron& iron);

#endif
