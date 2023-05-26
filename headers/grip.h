#ifndef GRIP_H
#define GRIP_H

#include <iostream>
#include <string>

class Grip {
    private:
        std::string gripType;
        std::string gripMaterial;
        std::string gripAngle;
    
    public:
        Grip();
        Grip(std::string gripType, std::string gripMaterial, std::string gripAngle);
        std::string getGrip();
        void setGrip(std::string, std::string, std::string);
};

Grip::Grip() {
    gripType = "low";
    gripMaterial = "rubber";
    gripAngle = "0";
}

Grip::Grip(std::string gripType, std::string gripMaterial, std::string gripAngle) {
    this->gripType = gripType;
    this->gripMaterial = gripMaterial;
    this->gripAngle = gripAngle;
}

std::string Grip::getGrip() {
    return "Type: " + gripType + "\nMaterial: " + gripMaterial + "\nAngle: " + gripAngle;
}

void Grip::setGrip(std::string gripType, std::string gripMaterial, std::string gripAngle) {
    this->gripType = gripType;
    this->gripMaterial = gripMaterial;
    this->gripAngle = gripAngle;
}

#endif