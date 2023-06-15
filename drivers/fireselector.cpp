/**
 * @file fireselector.cpp
 * @brief This is the implementation file for the Fire Selector class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef FIRESELECTOR_CPP
#define FIRESELECTOR_CPP

#include <iostream>
#include <string>

#include "../headers/fireselector.h" // Header file that contains the Barrel class.

// Default constructor.

/**
 * @brief Construct a new FireSelector:: FireSelector object
*/

FireSelector::FireSelector() {
    toggleSelector = "Automatic";
    fireMode = true;
};

/**
 * @brief Construct a new FireSelector:: FireSelector object
 * 
 * @param toggleSelector 
*/

FireSelector::FireSelector(std::string toggleSelector, bool fireMode) {
    this->toggleSelector = toggleSelector;
    this->fireMode = fireMode;
};

// Getters

/**
 * @brief Get the FireSelector object
 * 
 * @return std::string 
*/

std::string FireSelector::getFireSelector() {
    return "Fire Selection: " + toggleSelector + ".";
};

// Setters

/**
 * @brief Set the FireSelector toggle selector argument
 * @param length 
*/

void FireSelector::setFireSelector(std::string toggleSelector) {
    this->toggleSelector = toggleSelector;
};

// Methods

/**
 * @brief Toggle the fire selector
*/

void FireSelector::toggleFireSelector() {
    fireMode = !fireMode;
};

/**
 * @brief Create a fire selector
 * 
 * @return std::string 
*/

std::string FireSelector::createFireSelector() {
    // We declare the variables that we will use.
    int selection;
    std::string strVal;

    std::cout << "Select fire mode: " << std::endl;
    std::cout << "1. Automatic, 2. Burst" << std::endl;
    std::cin >> selection;

    if (selection == 1) {
        strVal = "Automatic";
    } else if (selection == 2) {
        strVal = "Semi-Automatic";
    } else {
        std::cout << "Invalid selection. Please try again." << std::endl;
        createFireSelector();
    }
    setFireSelector(strVal);

    return getFireSelector();
};


#endif