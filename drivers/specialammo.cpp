/**
 * @file specialammo.cpp
 * @brief This is the implentation file for the Special Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef SPECIALAMMO_CPP
#define SPECIALAMMO_CPP

#include <iostream>
#include <string>

#include "../headers/specialammo.h" // Header file that contains the SpecialAmmo class.

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