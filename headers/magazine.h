#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <iostream>
#include <string>
#include "headers\ammo.h"

class Magazine {
    private:
        // We create an array of Ammo objects to simulate a magazine.
        Ammo ammo[0];
        int size;
    
    public:
        Magazine();
        Magazine(Ammo ammo[], int size);
        std::string getMagazine();
        void setMagazine(Ammo ammo[], int size);
        void addAmmo(Ammo ammo);
        void removeAmmo();
};

Magazine::Magazine() {
    size = 0;
}

Magazine::Magazine(Ammo ammo[], int size) {
    this->size = size;
    for (int i = 0; i < size; i++) {
        this->ammo[i] = ammo[i];
    }
}

std::string Magazine::getMagazine() {
    std::string bullets = "";
    for (int i = 0; i < size; i++) {
        bullets += ammo[i].getAmmo() + "\n";
    }
    return bullets;
}

void Magazine::setMagazine(Ammo ammo[], int size) {
    this->size = size;
    for (int i = 0; i < size; i++) {
        this->ammo[i] = ammo[i];
    }
}

void Magazine::addAmmo(Ammo ammo) {
    size++;
    Ammo updatedSize[size];
    for (int i = 0; i < size - 1; i++) {
        updatedSize[i] = this->ammo[i];
    }
    updatedSize[size - 1] = ammo;
    this->ammo[size - 1] = ammo;
}

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

#endif