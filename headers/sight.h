/**
 * @file sight.h
 * @brief This is the declaration file for the Sight class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef SIGHT_H
#define SIGTH_H

#include <iostream>
#include <string>

class Sight {
    private:
    // Attributes
        std::string type; // Type of sight
        float radius; // Radius of sight in mm
    
    public:
    // Constructors
        Sight();
        Sight(std::string type, float radius);
    // Getters
        std::string getSight();
    // Setters
        void setSightType(std::string type);
        void setSightRadius(float radius);
    // Methods
        std::string createSight();
};



#endif