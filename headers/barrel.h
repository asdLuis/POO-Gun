/**
 * @file barrel.h
 * @brief This is the declaration file for the Barrel class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef BARREL_H
#define BARREL_H

#include <iostream>
#include <string>

class Barrel {
    private:
    // Attributes
        double length; // Length in mm
        int caliber; // Caliber in inches
        std::string material; // Material of the barrel
    
    public:
    // Constructors
        Barrel();
        Barrel(double length, int caliber, std::string material);
    // Getters
        std::string getBarrel();
    // Setters
        void setBarrelLen(double);
        void setBarrelCal(int);
        void setBarrelMat(std::string);
    // Methods
        std::string createBarrel();
};

#endif