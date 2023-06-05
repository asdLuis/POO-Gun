#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <iostream>
#include <string>
#include <vector>
#include "./ammo.h"
#include "./specialammo.h"

class Magazine {
    private:
        // We create an array of Ammo objects to simulate a magazine.
        std::vector<Ammo *> ammo;
        int size;
    
    public:
        Magazine();
        Magazine(int size);
        void getMagazine();
        void addAmmo(std::string caliber);
        void addSpecialAmmo(std::string caliber, std::string effects);
        SpecialAmmo* getSpecialAmmo();
        // void removeAmmo();
};

Magazine::Magazine() {
    size = 0;
}

Magazine::Magazine(int size) {
    this->size = size;
}

// Returns a string of all the ammo in the magazine.

void Magazine::getMagazine() {
    for(Ammo* am : ammo) {
        std::cout << am->getAmmo() << std::endl;
    }
}

// Test start "getSpecialAmmo()"

SpecialAmmo* Magazine::getSpecialAmmo() {
    for(Ammo* am : ammo) {
        if(dynamic_cast<SpecialAmmo*>(am)){
            return dynamic_cast<SpecialAmmo*>(am);
        }
    }
    return nullptr;
}

// Test end "getSpecialAmmo()"

// Adds an Ammo object to the magazine.

void Magazine::addAmmo(std::string caliber) {
    Ammo* am = new Ammo(caliber);
    ammo.push_back(am);
    delete am;
}

// Adds a SpecialAmmo object to the magazine.

void Magazine::addSpecialAmmo(std::string caliber, std::string effects) {
    Ammo* specialAmmo = new SpecialAmmo(caliber, effects);
    ammo.push_back(specialAmmo);
    delete specialAmmo;
}

/*

void Magazine::removeAmmo() {
    size--;
    Ammo updatedSize[size];
    for (int i = 0; i < size; i++) {
        updatedSize[i] = ammo[i];
    }
    for (int i = 0; i < size; i++) {
        ammo[i] = updatedSize[i];
    }
}

*/

#endif