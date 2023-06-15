/**
 * @file commonammo.h
 * @brief This is the declaration file for the Common Ammo class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef COMMONAMMO_H
#define COMMONAMMO_H

class CommonAmmo : public Ammo {
    private: 
    // Attributes
        std::string caliber;

    public:
    // Constructors
        CommonAmmo();
        CommonAmmo(std::string caliber);
    // Destructor
        ~CommonAmmo() = default;
    // Getters and Setters
        std::string getCommonAmmo();
        void setCommonAmmo(std::string caliber);
    // Methods
        std::string displayInfo();
};

#endif