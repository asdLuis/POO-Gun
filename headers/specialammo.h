#ifndef SPECIALAMMO_H
#define SPECIALAMMO_H

#include <iostream>
#include <string>
#include "ammo.h"

class SpecialAmmo : public Ammo {
    private:
        std::string effects;

    public:
        SpecialAmmo();
        SpecialAmmo(std::string caliber, std::string effects);
        ~SpecialAmmo() = default;
        std::string getEffects();
        void setEffects(std::string);
        void displayInfo();
};

SpecialAmmo::SpecialAmmo() {
    effects = "none";
}

SpecialAmmo::SpecialAmmo(std::string caliber, std::string effects) : Ammo(caliber, capacity) {
    this->effects = effects;
}

std::string SpecialAmmo::getEffects() {
    return effects;
}

void SpecialAmmo::setEffects(std::string effects) {
    this->effects = effects;
}

void SpecialAmmo::displayInfo() {
    std::cout << "I am a bullet of " << caliber << "caliber and with the " << effects << "effect!" << std::endl;
}

#endif