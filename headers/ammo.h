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
        std::string caliber;
    
    public:
        Ammo();
        Ammo(std::string caliber);
        virtual ~Ammo() = default;
        std::string getAmmo();
        void setAmmo(std::string);
        virtual std::string displayInfo() = 0;
};

#endif