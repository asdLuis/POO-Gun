/**
 * @file specialammo.h
 * @brief This is the declaration file for the Special Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef SPECIALAMMO_H
#define SPECIALAMMO_H

#include <iostream>
#include <string>
#include "ammo.h"

class SpecialAmmo : public Ammo {
    private:
    // Attributes
        std::string effects;

    public:
    // Constructors
        SpecialAmmo();
        SpecialAmmo(std::string caliber, std::string effects);
    // Destructor
        ~SpecialAmmo() = default;
    // Getters and Setters
        std::string getEffects();
        void setEffects(std::string);
    // Methods
        std::string displayInfo();
};

#endif