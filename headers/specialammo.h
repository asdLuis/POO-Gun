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
#include "./ammo.h"

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

// Default constructor.

/**
 * @brief Construct a new Special Ammo:: Special Ammo object
 */

SpecialAmmo::SpecialAmmo() {
    effects = "none";
}

/**
 * @brief Construct a new Special Ammo:: Special Ammo object
 * 
 * @param caliber 
 * @param effects 
 */

SpecialAmmo::SpecialAmmo(std::string caliber, std::string effects) : Ammo(caliber) {
    this->effects = effects;
}

// Getters

/**
 * @brief Get the Effects object
 * 
 * @return std::string
 */

std::string SpecialAmmo::getEffects() {
    return effects;
}

// Setters

/**
 * @brief Set the Effects object
 * 
 * @param effects 
 */

void SpecialAmmo::setEffects(std::string effects) {
    this->effects = effects;
}

// Methods

/**
 * @brief Display the information of the SpecialAmmo object
 * 
 * @return std::string
 */

std::string SpecialAmmo::displayInfo() {
    return "I am a bullet of " + caliber + " caliber and with an " +  effects + " effect!\n";
}

#endif