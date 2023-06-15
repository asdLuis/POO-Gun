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
        std::string displayInfo();
};

SpecialAmmo::SpecialAmmo() {
    effects = "none";
}

SpecialAmmo::SpecialAmmo(std::string caliber, std::string effects) : Ammo(caliber) {
    this->effects = effects;
}

std::string SpecialAmmo::getEffects() {
    return effects;
}

void SpecialAmmo::setEffects(std::string effects) {
    this->effects = effects;
}

std::string SpecialAmmo::displayInfo() {
    return "I am a bullet of " + caliber + " caliber and with an " +  effects + " effect!\n";
}

#endif