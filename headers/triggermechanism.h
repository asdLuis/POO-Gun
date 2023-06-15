/**
 * @file triggermechanism.cpp
 * @brief This is the declaration file for the Trigger Mechanism class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef TRIGGERMECHANISM_H
#define TRIGGERMECHANISM_H

#include <iostream>
#include <string>

class TriggerMechanism {
    // Attributes
    private:
        float triggerWeight;
        std::string triggerType;
        std::string safetyMechanisms;
    
    public:
    // Constructors
        TriggerMechanism();
        TriggerMechanism(float triggerWeight, std::string triggerType, std::string safetyMechanisms);
    // Getters
        std::string getTriggerMechanism();
    // Setters
        void setTriggerMechanismWeight(float triggerWeight);
        void setTriggerMechanismType(std::string triggerType);
        void setSafetyMechanisms(std::string safetyMechanisms);
    // Methods
        bool operateSafety();
        std::string createTriggerMechanism();
};

#endif