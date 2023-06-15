/**
 * @file stock.cpp
 * @brief This is the implementation file for the Stock class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
*/

#ifndef STOCK_CPP
#define STOCK_CPP

#include <iostream>
#include <string>

#include "../headers/stock.h" // Header file that contains the Stock class.

// Default constructor.

/**
 * @brief Construct a new Stock:: Stock object
*/

Stock::Stock() {
    type = "0";
    material = "0";
    lengthOfPull = 0;
}

// Constructor with parameters.

/**
 * @brief Construct a new Stock:: Stock object
 * 
 * @param type 
 * @param material 
 * @param lengthOfPull 
*/

Stock::Stock(std::string type, std::string material, float lengthOfPull) {
    this->type = type;
    this->material = material;
    this->lengthOfPull = lengthOfPull;
}

// Getters

/**
 * @brief Get the Stock object
 * 
 * @return std::string 
*/

std::string Stock::getStock() {
    return "Type: " + type + ", Material: " + material + ", Length of Pull: " + std::to_string(lengthOfPull) + " in.";
}

// Setters

/**
 * @brief Set the Stock Type object
 * 
 * @param type 
*/

void Stock::setStockType(std::string type) {
    this->type = type;
}

/**
 * @brief Set the Stock Material object
 * 
 * @param material 
*/

void Stock::setStockMaterial(std::string material) {
    this->material = material;
}

/**
 * @brief Set the Stock Length Of Pull object
 * 
 * @param lengthOfPull 
*/

void Stock::setStockLengthOfPull(float lengthOfPull) {
    this->lengthOfPull = lengthOfPull;
}

std::string Stock::createStock() {
    // We declare the variables that we will use.
    int selection;
    int intVal;
    float floatVal;
    std::string strVal;

    // We ask the user to select the type of stock they want to create.
    std::cout << "Select the type of stock you want to create: " << std::endl;
    std::cout << "1. Fixed, 2. Adjustable" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Fixed";
    } else if (selection == 2) {
        strVal = "Adjustable";
    } else {
        std::cout << "Invalid selection. Please try again." << std::endl;
        createStock();
    }
    setStockType(strVal);

    // Since you can choose between a fixed or adjustable stock, if the user chose a fixed stock, we skip the length of pull selection. Otherwise, we ask the user to select the length of pull.
    if (selection == 1) {
        std::cout << "Since you chose a fix stock, your length of pull cannot be changed." << std::endl;
    } else if (selection == 2) {
        std::cout << "Enter the length of pull: " << std::endl;
        std::cout << "1. 10 in., 2. 12 in., 3. 14 in., 4. 16 in., 5. 18 in." << std::endl;
        std::cin >> selection;
        if (selection == 1) {
            floatVal = 10;
        } else if (selection == 2) {
            floatVal = 12;
        } else if (selection == 3) {
            floatVal = 14;
        } else if (selection == 4) {
            floatVal = 16;
        } else if (selection == 5) {
            floatVal = 18;
        } else {
            std::cout << "Invalid selection. Please try again." << std::endl;
            createStock();
        }
    }
    setStockLengthOfPull(floatVal);

    // We ask the user to select the material of the stock.
    std::cout << "Select the material of the stock you want to create: " << std::endl;
    std::cout << "1. Wood, 2. Plastic, 3. Metal" << std::endl;
    std::cin >> selection;
    if (selection == 1) {
        strVal = "Wood";
    } else if (selection == 2) {
        strVal = "Plastic";
    } else if (selection == 3) {
        strVal = "Metal";
    } else {
        std::cout << "Invalid selection. Please try again." << std::endl;
        createStock();
    }
    setStockMaterial(strVal);

    // We return the result of the Stock
    return getStock();
}

#endif