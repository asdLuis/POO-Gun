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
        SpecialAmmo(std::string caliber, int capacity, std::string effects);
        std::string getEffects();
        void setEffects(std::string);
        void greetUser();
};

SpecialAmmo::SpecialAmmo() {
    effects = "none";
}

SpecialAmmo::SpecialAmmo(std::string caliber, int capacity, std::string effects) : Ammo(caliber, capacity) {
    this->effects = effects;
}

std::string SpecialAmmo::getEffects() {
    return effects;
}

void SpecialAmmo::setEffects(std::string effects) {
    this->effects = effects;
}

void SpecialAmmo::greetUser() {
    std::cout << "HeLlO, uSeR! i Am A sPeCiAl BuLlEt" << std::endl;
}

#endif