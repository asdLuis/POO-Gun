/**
 * @file fireselector.h
 * @brief This is the declaration file for the Fire Selector class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef FIRESELECTOR_H
#define FIRESELECTOR_H

#include <iostream>
#include <string>

class FireSelector {
    private:
    // Attributes
        std::string toggleSelector;
        bool fireMode;
    
    public:
    // Constructors
        FireSelector();
        FireSelector(std::string toggleSelector, bool fireMode);
    // Getters
        std::string getFireSelector();
        void setFireSelector(std::string toggleSelector);
    // Methods
        void toggleFireSelector();
        std::string createFireSelector();
};

#endif