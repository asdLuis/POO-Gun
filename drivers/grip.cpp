/**
 * @file grip.cpp
 * @brief This is the implementation file for the Grip class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef GRIP_CPP
#define GRIP_CPP

#include <iostream>
#include <string>

#include "../headers/grip.h" // Header file that contains the Grip class.

// Default constructor.

/**
 * @brief Construct a new Grip:: Grip object
*/

Grip::Grip() {
    gripType = "low";
    gripMaterial = "rubber";
    gripAngle = "0";
}

/**
 * @brief Construct a new Grip:: Grip object
 * 
 * @param gripType
 * @param gripMaterial
 * @param gripAngle
*/

Grip::Grip(std::string gripType, std::string gripMaterial, std::string gripAngle) {
    this->gripType = gripType;
    this->gripMaterial = gripMaterial;
    this->gripAngle = gripAngle;
}

// Getters

/**
 * @brief Get the Grip object
 * 
 * @return std::string
*/

std::string Grip::getGrip() {
    return "Type: " + gripType + ", Material: " + gripMaterial + ", Angle: " + gripAngle + "∠.";
}

// Setters

/**
 * @brief Set the Grip Type argument
 * @param gripType
*/

void Grip::setGripType(std::string gripType) {
    this->gripType = gripType;
}

/**
 * @brief Set the Grip Material argument
 * @param gripMaterial
*/

void Grip::setGripMaterial(std::string gripMaterial) {
    this->gripMaterial = gripMaterial;
}

/**
 * @brief Set the Grip Angle argument
 * @param gripAngle
*/

void Grip::setGripAngle(std::string gripAngle) {
    this->gripAngle = gripAngle;
}

// Methods

/**
 * @brief Create a Grip object
 * 
 * @return std::string
*/

std::string Grip::createGrip() {
    // We declare the variables that we will use.
    int selection;
    std::string strVal;

    std::cout << "Select the type of grip you want to add to your weapon: " << std::endl;
    std::cout << "1. Rubber, 2. Plastic, 3. Wood, 4. Metal" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "rubber";
    } else if (selection == 2) {
        strVal = "plastic";
    } else if (selection == 3) {
        strVal = "wood";
    } else if (selection == 4) {
        strVal = "metal";
    } else {
        std::cout << "Invalid selection, try again." << std::endl;
        createGrip();
    }
    setGripMaterial(strVal);

    std::cout << "Select the angle of the grip you want to add to your weapon: " << std::endl;
    std::cout << "1. 0∠, 2. 15∠, 3. 30∠, 4. 45∠, 5. 60∠, 6. 75∠, 7. 90∠" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "0";
    } else if (selection == 2) {
        strVal = "15";
    } else if (selection == 3) {
        strVal = "30";
    } else if (selection == 4) {
        strVal = "45";
    } else if (selection == 5) {
        strVal = "60";
    } else if (selection == 6) {
        strVal = "75";
    } else if (selection == 7) {
        strVal = "90";
    } else {
        std::cout << "Invalid selection, try again." << std::endl;
        createGrip();
    }
    setGripAngle(strVal);

    std::cout << "Select the type of grip you want to add to your weapon: " << std::endl;
    std::cout << "1. Low, 2. Medium, 3. High" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Low";
    } else if (selection == 2) {
        strVal = "Medium";
    } else if (selection == 3) {
        strVal = "High";
    } else {
        std::cout << "Invalid selection, try again." << std::endl;
        createGrip();
    }
    setGripType(strVal);

    return getGrip();

}

#endif