/**
 * @file simulator.h
 * @brief This is the implementation file for the Simulator class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

#include "../drivers/assaultrifle.cpp"

class Simulator {
    private:
    // Atributes
    AssaultRifle ar;

    public:
    // Constructors
        Simulator();
    
    // Destructor
        ~Simulator();
    
    // Methods
        void createNewSimulator(); // Creates a new simulator
        void clearScreen(); // Clears the screen
};

#endif