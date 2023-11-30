#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

struct Animal {
   string name;
   string classification;
   string nickname;
};

void fillAnimal(Animal& animal);
void displayAnimal(const Animal& animal);
void makeSound(const Animal& animal);

#endif 
