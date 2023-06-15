/**
 * @file commonammo.cpp
 * @brief This is the implentation file for the Common Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef COMMONAMMO_CPP
#define COMMONAMMO_CPP

#include <iostream>
#include <string>

#include "../headers/commonammo.h" // Header file that contains the CommonAmmo class.

// Default constructor.

/**
 * @brief Construct a new Common Ammo:: Common Ammo object
 */

CommonAmmo::CommonAmmo(){
    caliber = "none";
}

/**
 * @brief Construct a new Common Ammo:: Common Ammo object
 * 
 * @param caliber 
 */

CommonAmmo::CommonAmmo(std::string caliber) : Ammo(caliber){
    this->caliber = caliber;
}

// Getters 

/**
 * @brief Get the Common Ammo object
 * 
 * @return std::string
 */

std::string CommonAmmo::getCommonAmmo(){
    return caliber;
}

// Setters

/**
 * @brief Set the Common Ammo object
 * 
 * @param caliber 
 */

void CommonAmmo::setCommonAmmo(std::string caliber){
    this->caliber = caliber;
}

// Methods

/**
 * @brief This method displays the information of the common ammo.
 * 
 * @return std::string
 */

std::string CommonAmmo::displayInfo(){
    return "I am a bullet of " + caliber + " caliber and without an effect." + "\n";
}