/**
 * @file handguard.h
 * @brief This is the declaration file for the Hand Guard class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef HANDGUARD_H
#define HANDGUARD_H

#include <iostream>
#include <string>

class Handguard {
    private:
    // Attributes
        float length;
        std::string material;
    
    public:
    // Constructors
        Handguard();
        Handguard(float length, std::string material);
    // Getters
        std::string getHandguard();
    // Setters
        void setHandguardLength(float length);
        void setHandguardMaterial(std::string material);
    // Methods
        std::string createHandguard();
};



#endif