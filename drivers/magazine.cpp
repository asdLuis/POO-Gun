/**
 * @file magazine.cpp
 * @brief This is the implementation file for the Magazine class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef MAGAZINE_CPP
#define MAGAZINE_CPP

#include <iostream>
#include <string>

#include "../headers/magazine.h" // Header file that contains the Magazine class.

// Default constructor.

/**
 * @brief Construct a new Magazine:: Magazine object
*/

Magazine::Magazine() {
    // Default constructor
}

/**
 * @brief Destroy the Magazine:: Magazine object
*/

Magazine::~Magazine() {
    // Clean up allocated ammo objects
    for (auto ammo : ammoList) {
        delete ammo;
    }
}

// Methods

/**
 * @brief Get the Magazine object
 * 
 * @return std::string
*/

std::string Magazine::getMagazine() {
    // Display the contents of the magazine
    std::string magazineContents = "Magazine contents:\n";
    for (auto ammo : ammoList) {
        magazineContents += ammo->displayInfo() + "\n";
    }
    return magazineContents;
}

/**
 * @brief Add a Common Ammo object to the magazine
 * 
 * @param ammo 
*/

void Magazine::addCommonAmmo(Ammo* ammo) {
    ammoList.push_back(ammo);
}

/**
 * @brief Add a Special Ammo object to the magazine
 * 
 * @param ammo 
*/

void Magazine::addSpecialAmmo(Ammo* ammo) {
    ammoList.push_back(ammo);
}

/**
 * @brief Display the contents of the magazine
 * 
*/

void Magazine::displayContents() const {
    // Display the contents of the magazine
    for (auto ammo : ammoList) {
        ammo->displayInfo();
    }
}

/**
 * @brief Create a Magazine object
 * 
 * @return std::string
*/

std::string Magazine::createMagazine() {
    int selection;
    int intVal;
    int intVal2;
    std::string strVal;
    std::string strVal2;


    std::cout << "What type of ammo do you want to add to the magazine?" << std::endl; // Ask the user what type of ammo they want to add to the magazine
    std::cout << "1. Common Ammo, 2. Special Ammo" << std::endl;
    std::cin >> selection;

    if (selection == 1) { // If the user selects Common Ammo
        std::cout << "Enter the caliber for the Common Ammo: ";
        std::cout << "1. 9mm, 2. 5.56mm, 3. 7.62mm, 4. 12.7mm, 5. 14.5mm \n"; // Only ask for caliber
        std::cin >> selection;
        if (selection == 1) {
            strVal = "9mm";
        } else if (selection == 2) {
            strVal = "5.56mm";
        } else if (selection == 3) {
            strVal = "7.62mm";
        } else if (selection == 4) {
            strVal = "12.7mm";
        } else if (selection == 5) {
            strVal = "14.5mm";
        } else {
            std::cout << "Invalid selection, try again." << std::endl;
            createMagazine();
        }
        addCommonAmmo(new CommonAmmo(strVal)); // Add the Common Ammo to the magazine
    } else if (selection == 2) { // If the user selects Special Ammo
        std::cout << "Enter the caliber for the Special Ammo: ";
        std::cout << "1. 9mm, 2. 5.56mm, 3. 7.62mm, 4. 12.7mm, 5. 14.5mm \n"; // Ask for caliber
        std::cin >> selection;
        if (selection == 1) {
            strVal = "9mm";
        } else if (selection == 2) {
            strVal = "5.56mm";
        } else if (selection == 3) {
            strVal = "7.62mm";
        } else if (selection == 4) {
            strVal = "12.7mm";
        } else if (selection == 5) {
            strVal = "14.5mm";
        } else {
            std::cout << "Invalid selection, try again." << std::endl;
            createMagazine();
        }
        std::cout << "Enter the effects for the Special Ammo: ";
        std::cout << "1. Explosive, 2. Incendiary, 3. Armor Piercing, 4. Tracer, 5. Hollow Point \n"; // Ask for effects
        std::cin.ignore();  // Ignore the newline character left in the input stream
        std::cin >> selection;
        if (selection == 1) {
            strVal2 = "Explosive";
        } else if (selection == 2) {
            strVal2 = "Incendiary";
        } else if (selection == 3) {
            strVal2 = "Armor Piercing";
        } else if (selection == 4) {
            strVal2 = "Tracer";
        } else if (selection == 5) {
            strVal2 = "Hollow Point";
        } else {
            std::cout << "Invalid selection, try again." << std::endl;
            createMagazine();
        }
        addSpecialAmmo(new SpecialAmmo(strVal, strVal2)); // Add the Special Ammo to the magazine
    } else {
        std::cout << "Invalid selection, try again." << std::endl;
        createMagazine();
    }
    return getMagazine();
}

#endif