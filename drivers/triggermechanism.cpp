/**
 * @file triggermechanism.cpp
 * @brief This is the implementation file for the Grip class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef TRIGGERMECHANISM_CPP
#define TRIGGERMECHANISM_CPP

#include <iostream>
#include <string>

#include "../headers/triggermechanism.h" // Header file that contains the TriggerMechanism class.

// Default constructor.

/**
 * @brief Construct a new TriggerMechanism:: TriggerMechanism object
*/

TriggerMechanism::TriggerMechanism() {
    triggerWeight = 0;
    triggerType = "0";
    safetyMechanisms = "none";
}

/**
 * @brief Construct a new TriggerMechanism:: TriggerMechanism object
 * 
 * @param triggerWeight
 * @param triggerType
 * @param safetyMechanisms
*/

TriggerMechanism::TriggerMechanism(float triggerWeight, std::string triggerType, std::string safetyMechanisms) {
    this->triggerWeight = triggerWeight;
    this->triggerType = triggerType;
    this->safetyMechanisms = safetyMechanisms;
}

// Getters

/**
 * @brief Get the Trigger Mechanism object
 * 
 * @return std::string
*/

std::string TriggerMechanism::getTriggerMechanism() {
    return "Trigger Weight: " + std::to_string(triggerWeight) + ", Trigger Type: " + triggerType + ", Safety Mechanisms: " + safetyMechanisms + ".";
}

// Setters

/**
 * @brief Set the Trigger Mechanism Weight argument
 * @param triggerWeight
*/

void TriggerMechanism::setTriggerMechanismWeight(float triggerWeight) {
    this->triggerWeight = triggerWeight;
}

/**
 * @brief Set the Trigger Mechanism Type argument
 * @param triggerType
*/

void TriggerMechanism::setTriggerMechanismType(std::string triggerType) {
    this->triggerType = triggerType;
}

/**
 * @brief Set the Safety Mechanisms argument
 * @param safetyMechanisms
*/

void TriggerMechanism::setSafetyMechanisms(std::string safetyMechanisms) {
    this->safetyMechanisms = safetyMechanisms;
}

// Methods

/**
 * @brief This method will operate the trigger mechanism.
 * @return bool
*/

bool TriggerMechanism::operateSafety() {
    std::cout << "Safety engaged." << std::endl;
    return true;
}

std::string TriggerMechanism::createTriggerMechanism() {
    // We declare the variables that we will use.
    int selection;
    float floatVal;
    std::string strVal;

    std::cout << "Select the trigger mechanism weight: " << std::endl;
    std::cout << "1. 0.5 lbs, 2. 1.0 lb, 3. 1.5 lb, 4. 2.0 lb" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        floatVal = 0.5;
    } else if (selection == 2) {
        floatVal = 1.0;
    } else if (selection == 3) {
        floatVal = 1.5;
    } else if (selection == 4) {
        floatVal = 2.0;
    } else {
        std::cout << "Invalid selection, please try again." << std::endl;
        createTriggerMechanism();
    }
    setTriggerMechanismWeight(floatVal);

    std::cout << "Select the trigger mechanism type: " << std::endl;
    std::cout << "1. Single Stage, 2. Two Stage" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Single Stage";
    } else if (selection == 2) {
        strVal = "Two Stage";
    } else {
        std::cout << "Invalid selection, please try again." << std::endl;
        createTriggerMechanism();
    }
    setTriggerMechanismType(strVal);

    std::cout << "Select the safety mechanism: " << std::endl;
    std::cout << "1. Manual, 2. Automatic" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Manual";
    } else if (selection == 2) {
        strVal = "Automatic";
    } else {
        std::cout << "Invalid selection, please try again." << std::endl;
        createTriggerMechanism();
    }
    setSafetyMechanisms(strVal);

    return getTriggerMechanism();
}

#endif