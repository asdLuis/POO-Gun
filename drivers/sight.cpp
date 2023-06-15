/**
 * @file sight.cpp
 * @brief This is the implementation file for the Sight class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
*/

#ifndef SIGHT_CPP
#define SIGHT_CPP

#include <iostream>
#include <string>

#include "..\headers\sight.h" // Header file that contains the Sight class.

// Default constructor.

/**
 * @brief Construct a new Sight:: Sight object
*/

Sight::Sight() {
    type = "0";
    radius = 0;
}

/**
 * @brief Construct a new Sight:: Sight object
 * 
 * @param type 
 * @param radius 
*/

Sight::Sight(std::string type, float radius) {
    this->type = type;
    this->radius = radius;
}

// Getters

/**
 * @brief Get the Sight object
 * 
 * @return std::string 
*/

std::string Sight::getSight() {
    return "Type: " + type + ", Radius: " + std::to_string(radius) + " in.";
}

// Setters

/**
 * @brief Set the Sight Type argument
 * @param type
*/

void Sight::setSightType(std::string type) {
    this->type = type;
}

/**
 * @brief Get the Radius argument
 * @param type
 * @param radius
*/

void Sight::setSightRadius(float radius) {
    this->radius = radius;
}

/**
 * @brief Create a Sight object
 * 
 * @return std::string
*/

std::string Sight::createSight() {
    // We declare the variables that we will use
    int selection;
    int intVal;
    std::string strVal;
    float floatVal;

    // We ask the user to input the values for the attributes of the object
    std::cout << "What type of sight do you want to use? Select a number from the list below: " << std::endl;
    std::cout << "1. Iron sight, 2. Red dot sight, 3. Holographic sight, 4. Sniper scope" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Iron sight";
    } else if (selection == 2) {
        strVal = "Red dot sight";
    } else if (selection == 3) {
        strVal = "Holographic sight";
    } else if (selection == 4) {
        strVal = "Sniper scope";
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
        createSight();
    }
    setSightType(strVal);

    // We ask the user to input the values for the attributes of the object
    std::cout << "What radius do you want to use? Select a number from the list below: " << std::endl;
    std::cout << "1. 1.5 in, 2. 2.0 in, 3. 2.5 in, 4. 3.0 in" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        floatVal = 1.5;
    } else if (selection == 2) {
        floatVal = 2.0;
    } else if (selection == 3) {
        floatVal = 2.5;
    } else if (selection == 4) {
        floatVal = 3.0;
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
        createSight();
    }
    setSightRadius(floatVal);

    // We return the result of the Sight
    return getSight();
}

#endif