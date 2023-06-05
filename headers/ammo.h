#ifndef AMMO_H
#define AMMO_H

#include <iostream>
#include <string>

class Ammo {
    protected:
        std::string caliber;
    
    public:
        Ammo();
        Ammo(std::string caliber);
        virtual ~Ammo() = default;
        std::string getAmmo();
        void setAmmo(std::string);
        void displayInfo();
};

Ammo::Ammo() {
    caliber = "0";
}

Ammo::Ammo(std::string caliber) {
    this->caliber = caliber;
}

std::string Ammo::getAmmo() {
    return "Caliber: " + caliber;
}

void Ammo::setAmmo(std::string caliber) {
    this->caliber = caliber;
}

void Ammo::displayInfo() {
    std::cout << "Im a" << caliber << "caliber bullet! And not special" << std::endl;
}

#endif