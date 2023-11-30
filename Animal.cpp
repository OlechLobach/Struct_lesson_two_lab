#include "Animal.h"


void fillAnimal(Animal& animal) {
    cout << "Enter name: ";
    cin >> animal.name;
    cout << "Enter classification: ";
    cin >> animal.classification;
    cout << "Enter nickname: ";
    cin >> animal.nickname;
}

void displayAnimal(const Animal& animal) {
    cout << "Name: " << animal.name << "\n";
    cout << "Classification: " << animal.classification << "\n";
    cout << "Nickname: " << animal.nickname << "\n";
}

void makeSound(const Animal& animal) {
    cout << animal.name << " says something...\n";
    
}
