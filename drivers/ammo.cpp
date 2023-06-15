/**
 * @file ammo.cpp
 * @brief This is the implentation file for the Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef AMMO_CPP
#define AMMO_CPP

#include <iostream>
#include <string>

#include "../headers/ammo.h" // Header file that contains the Ammo class.

// Default constructor.

/**
 * @brief Construct a new Ammo:: Ammo object
 */

Ammo::Ammo() {
    caliber = "0";
}

/**
 * @brief Construct a new Ammo:: Ammo object
 * 
 * @param caliber 
 */

Ammo::Ammo(std::string caliber) {
    this->caliber = caliber;
}

// Getters

/**
 * @brief Get the Ammo object
 * 
 * @return std::string
 */

std::string Ammo::getAmmo() {
    return "Caliber: " + caliber;
}

// Setters

/**
 * @brief Set the Ammo object
 * 
 * @param caliber 
 */

void Ammo::setAmmo(std::string caliber) {
    this->caliber = caliber;
}

// Methods

/**
 * @brief Display the Ammo object
 * 
 * @return std::string
 */

std::string Ammo::displayInfo() {
    return "Im a" + caliber + " caliber bullet! And not special.";
}

#endif