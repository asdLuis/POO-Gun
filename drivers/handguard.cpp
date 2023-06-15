/**
 * @file handguard.cpp
 * @brief This is the implementation file for the Hand Guard class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef HANDGUARD_CPP
#define HANDGUARD_CPP

#include <iostream>
#include <string>

#include "../headers/handguard.h" // Header file that contains the Handguard class.

// Default constructor.

/**
 * @brief Construct a new Handguard:: Handguard object
*/

Handguard::Handguard() {
    length = 0;
    material = "plastic";
}

/**
 * @brief Construct a new Handguard:: Handguard object
 * 
 * @param length 
 * @param material 
*/

Handguard::Handguard(float length, std::string material) {
    this->length = length;
    this->material = material;
}

// Getters

/**
 * @brief Get the Handguard object
 * 
 * @return std::string 
*/

std::string Handguard::getHandguard() {
    return "Length: " + std::to_string(length) + " in, Material: " + material + ".";
}

// Setters

/**
 * @brief Set the Handguard length argument
 * @param length 
*/

void Handguard::setHandguardLength(float length) {
    this->length = length;
}

/**
 * @brief Set the Handguard material argument
 * @param material 
*/

void Handguard::setHandguardMaterial(std::string material) {
    this->material = material;
}

// Methods

std::string Handguard::createHandguard() {
    // We declare the variables that we will use.
    int selection;
    std::string strVal;
    float floatVal;

    std::cout << "Select the handguard length : ";
    std::cout << "1. 3.5 in, 2. 4 in, 3. 4.5 in, 4. 5 in, 5. 5.5 in" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        floatVal = 3.5;
    } else if (selection == 2) {
        floatVal = 4;
    } else if (selection == 3) {
        floatVal = 4.5;
    } else if (selection == 4) {
        floatVal = 5;
    } else if (selection == 5) {
        floatVal = 5.5;
    } else {
        std::cout << "Invalid selection, Please try again" << std::endl;
        createHandguard();
    }
    setHandguardLength(floatVal);

    std::cout << "Select the handguard material : ";
    std::cout << "1. Plastic, 2. Wood, 3. Metal" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Plastic";
    } else if (selection == 2) {
        strVal = "Wood";
    } else if (selection == 3) {
        strVal = "Metal";
    } else {
        std::cout << "Invalid selection, Please try again" << std::endl;
        createHandguard();
    }
    setHandguardMaterial(strVal);

    return getHandguard();
}

#endif