#ifndef HANDGUARD_H
#define HANDGUARD_H

#include <iostream>
#include <string>

class Handguard {
    private:
        float length;
        std::string material;
    
    public:
        Handguard();
        Handguard(float length, std::string material);
        std::string getHandguard();
        void setHandguard(float, std::string);
};

Handguard::Handguard() {
    length = 0;
    material = "plastic";
}

Handguard::Handguard(float length, std::string material) {
    this->length = length;
    this->material = material;
}

std::string Handguard::getHandguard() {
    return "Length: " + std::to_string(length) + "\nMaterial: " + material;
}

void Handguard::setHandguard(float length, std::string material) {
    this->length = length;
    this->material = material;
}

#endif