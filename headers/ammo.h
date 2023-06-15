/**
 * @file ammo.h
 * @brief This is the declaration file for the Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef AMMO_H
#define AMMO_H

#include <iostream>
#include <string>

class Ammo { // This is an abstract class
    protected:
    // Attributes
        std::string caliber;
    
    public:
    // Constructors
        Ammo();
        Ammo(std::string caliber);
    // Destructor
        virtual ~Ammo() = default;
    // Getters and Setters
        std::string getAmmo();
        void setAmmo(std::string);
    // Methods
        virtual std::string displayInfo() = 0; // Abstract virtual function
};

#endif