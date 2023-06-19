/**
 * @file commonammo.h
 * @brief This is the declaration file for the Common Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef COMMONAMMO_H
#define COMMONAMMO_H

#include "./ammo.h"

class CommonAmmo : public Ammo {
    private: 
    // Attributes
        std::string caliber;

    public:
    // Constructors
        CommonAmmo();
        CommonAmmo(std::string caliber);
    // Destructor
        ~CommonAmmo() = default;
    // Getters and Setters
        std::string getCommonAmmo();
        void setCommonAmmo(std::string caliber);
    // Methods
        std::string displayInfo();
};

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

CommonAmmo::CommonAmmo(std::string caliber) : Ammo(caliber) {
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

#endif