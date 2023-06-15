/**
 * @file handguard.cpp
 * @brief This is the declaration file for the Hand Guard class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef GRIP_H
#define GRIP_H

#include <iostream>
#include <string>

class Grip {
    private:
    // Attributes
        std::string gripType;
        std::string gripMaterial;
        std::string gripAngle;
    
    public:
    // Constructors
        Grip();
        Grip(std::string gripType, std::string gripMaterial, std::string gripAngle);
    // Getters
        std::string getGrip();
    // Setters
        void setGripType(std::string gripType);
        void setGripMaterial(std::string gripMaterial);
        void setGripAngle(std::string gripAngle);
    // Methods
        std::string createGrip();
};

#endif