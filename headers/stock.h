#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>

class Stock {
    private:
        std::string type;
        std::string material;
        float lengthOfPull;
    
    public:
        Stock();
        Stock(std::string type, std::string material, float lengthOfPull);
        std::string getStock();
        void setStock(std::string, std::string, float);
};

Stock::Stock() {
    type = "0";
    material = "0";
    lengthOfPull = 0;
}

Stock::Stock(std::string type, std::string material, float lengthOfPull) {
    this->type = type;
    this->material = material;
    this->lengthOfPull = lengthOfPull;
}

std::string Stock::getStock() {
    return "Type: " + type + "\nMaterial: " + material + "\nLength of Pull: " + std::to_string(lengthOfPull);
}

void Stock::setStock(std::string type, std::string material, float lengthOfPull) {
    this->type = type;
    this->material = material;
    this->lengthOfPull = lengthOfPull;
}

#endif