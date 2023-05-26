#ifndef AMMO_H
#define AMMO_H

#include <iostream>
#include <string>

class Ammo {
    protected:
        std::string caliber;
        int capacity;
    
    public:
        Ammo();
        Ammo(std::string caliber, int capacity);
        std::string getAmmo();
        void setAmmo(std::string, int);
        void greetUser();
};

Ammo::Ammo() {
    caliber = "0";
    capacity = 0;
}

Ammo::Ammo(std::string caliber, int capacity) {
    this->caliber = caliber;
    this->capacity = capacity;
}

std::string Ammo::getAmmo() {
    return "Caliber: " + caliber + "\nCapacity: " + std::to_string(capacity);
}

void Ammo::setAmmo(std::string caliber, int capacity) {
    this->caliber = caliber;
    this->capacity = capacity;
}

void Ammo::greetUser() {
    std::cout << "Hello, user! I am a bullet" << std::endl;
}

#endif