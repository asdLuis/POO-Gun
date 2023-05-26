#ifndef BARREL_H
#define BARREL_H

#include <iostream>
#include <string>

class Barrel {
    private:
        int length;
        std::string caliber;
        std::string material;
    
    public:
        Barrel();
        Barrel(int length, std::string caliber, std::string material);
        std::string getBarrel();
        void setBarrel(int, std::string, std::string);
        void attachMuzzleDevice();
};

Barrel::Barrel() {
    length = 0;
    caliber = "0";
    material = "wood";
}

Barrel::Barrel(int length, std::string caliber, std::string material) {
    this->length = length;
    this->caliber = caliber;
    this->material = material;
}

std::string Barrel::getBarrel() {
    return "Length: " + std::to_string(length) + "\nCaliber: " + caliber + "\nMaterial: " + material;
}

void Barrel::setBarrel(int length, std::string caliber, std::string material) {
    this->length = length;
    this->caliber = caliber;
    this->material = material;
}

void Barrel::attachMuzzleDevice() {
    std::cout << "Muzzle device attached." << std::endl;
}

#endif