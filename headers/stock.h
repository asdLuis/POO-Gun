/**
 * @file stock.h
 * @brief This is the declaration file for the Stock class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
*/

#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>

class Stock {
    private:
    // Attributes
        std::string type;
        std::string material;
        float lengthOfPull;
    
    public:
    // Constructors
        Stock();
        Stock(std::string type, std::string material, float lengthOfPull);
    // Getters
        std::string getStock();
    // Setters
        void setStockType(std::string type);
        void setStockMaterial(std::string material);
        void setStockLengthOfPull(float lengthOfPull);
    // Methods
        std::string createStock();
};

#endif