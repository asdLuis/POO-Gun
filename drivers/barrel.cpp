/**
 * @file barrel.cpp
 * @brief This is the implementation file for the Barrel class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef BARREL_CPP
#define BARREL_CPP

#include <iostream>
#include <string>

#include "../headers/barrel.h" // Header file that contains the Barrel class.

// Default constructor.

/**
 * @brief Construct a new Barrel:: Barrel object
*/

Barrel::Barrel() {
    length = 0;
    caliber = 0;
    material = "wood";
}

/**
 * @brief Construct a new Barrel:: Barrel object
 * 
 * @param length 
 * @param caliber 
 * @param material 
*/

Barrel::Barrel(double length, int caliber, std::string material) {
    this->length = length;
    this->caliber = caliber;
    this->material = material;
}

// Getters

/**
 * @brief Get the Barrel object
 * 
 * @return std::string 
*/

std::string Barrel::getBarrel() {
    return "Length: " + std::to_string(length) + " mm, Caliber: " + std::to_string(caliber) + " in, Material: " + material + ".";
}

// Setters

/**
 * @brief Set the Barrel length argument
 * @param length 
*/

void Barrel::setBarrelLen(double length) {
    this->length = length;
}

/**
 * @brief Set the Barrel caliber argument
 * 
 * @param caliber 
*/

void Barrel::setBarrelCal(int caliber) {
    this->caliber = caliber;
}

/**
 * @brief Set the Barrel material argument
 * 
 * @param material 
*/

void Barrel::setBarrelMat(std::string material) {
    this->material = material;
}

// Barrel user creation

/**
 * @brief This function creates a barrel object using user input.
 * 
 * @return std::string 
*/

std::string Barrel::createBarrel() {
    // We declare the variables that we will use.
    int selection;
    int intVal;
    double doubleVal;
    std::string strVal;

    // We ask the user for the length of the barrel.
    std::cout << "What size of barrel length would you like to use? Select a number from the list below: " << std::endl; // We ask the user for the length of the barrel.
    std::cout << "1. 10mm, 2. 25mm, 3. 44mm, 4. 65mm" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        doubleVal = 0.10;
    } else if (selection == 2) {
        doubleVal = 0.25;
    } else if (selection == 3) {
        doubleVal = 0.44;
    } else if (selection == 4) {
        doubleVal = 0.66;
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
        return createBarrel();
    }
    setBarrelLen(doubleVal);

    // We ask the user for the caliber of the barrel.
    std::cout << "What caliber would you like to use on your barrel? Select a number from the list below: " << std::endl; // We ask the user for the caliber of the barrel.
    std::cout << "1. 9mm, 2. 12mm, 3. 20mm, 4. 30mm" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        intVal = 9;
    } else if (selection == 2) {
        intVal = 12;
    } else if (selection == 3) {
        intVal = 20;
    } else if (selection == 4) {
        intVal = 30;
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
        return createBarrel();
    }
    setBarrelCal(intVal);

    // We ask the user for the material of the barrel.
    std::cout << "What material would you like to use on your barrel? Select a number from the list below: " << std::endl; // We ask the user for the material of the barrel.
    std::cout << "1. Wood, 2. Steel, 3. Aluminum, 4. Titanium" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Wood";
    } else if (selection == 2) {
        strVal = "Steel";
    } else if (selection == 3) {
        strVal = "Aluminum";
    } else if (selection == 4) {
        strVal = "Titanium";
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
        return createBarrel();
    }

    // We return the result of the barrel.
    return getBarrel();
    
}

#endif