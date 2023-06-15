/**
 * @file magazine.cpp
 * @brief This is the declaration file for the Magazine class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <iostream>
#include <string>
#include <vector>
#include "../drivers/ammo.cpp"
#include "./specialammo.h"
#include "./commonammo.h"

class Magazine {
    private:
    // Attributes
    // We create an array of Ammo objects to simulate a magazine.
        std::vector<Ammo*> ammoList;
    
    public:
    // Default constructor.
        Magazine();
    // Destructor
        ~Magazine();

    // Methods
        std::string getMagazine();
        void addCommonAmmo(Ammo* ammo);
        void addSpecialAmmo(Ammo* ammo);
        void displayContents() const;
        std::string createMagazine();
};

#endif