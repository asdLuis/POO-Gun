#ifndef BARREL_H
#define BARREL_H

#include <iostream>
#include <string>

class Barrel {
    private:
        int length;
        int caliber;
        std::string material;
    
    public:
        Barrel();
        Barrel(int length, int caliber, std::string material);
        std::string getBarrel();
        void setBarrelLen(int);
        void setBarrelCal(int);
        void setBarrelMat(std::string);
        void attachMuzzleDevice();
};

Barrel::Barrel() {
    length = 0;
    caliber = 0;
    material = "wood";
}

Barrel::Barrel(int length, int caliber, std::string material) {
    this->length = length;
    this->caliber = caliber;
    this->material = material;
}

std::string Barrel::getBarrel() {
    return "Length: " + std::to_string(length) + "\nCaliber: " + std::to_string(caliber) + "\nMaterial: " + material;
}

void Barrel::setBarrelLen(int length) {
    this->length = length;
}

void Barrel::setBarrelCal(int caliber) {
    this->caliber = caliber;
}

void Barrel::setBarrelMat(std::string material) {
    this->material = material;
}

void Barrel::attachMuzzleDevice() {
    std::cout << "Muzzle device attached." << std::endl;
}

#endif