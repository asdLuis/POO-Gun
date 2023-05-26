#ifndef TRIGGERMECHANISM_H
#define TRIGGERMECHANISM_H

#include <iostream>
#include <string>

class TriggerMechanism {
    private:
        float triggerWeight;
        std::string triggerType;
        std::string safetyMechanisms;
    
    public:
        TriggerMechanism();
        TriggerMechanism(float triggerWeight, std::string triggerType, std::string safetyMechanisms);
        std::string getTriggerMechanism();
        void setTriggerMechanism(int, std::string, std::string);
        bool operateSafety();
};

TriggerMechanism::TriggerMechanism() {
    triggerWeight = 0;
    triggerType = "0";
    safetyMechanisms = "none";
}

TriggerMechanism::TriggerMechanism(float triggerWeight, std::string triggerType, std::string safetyMechanisms) {
    this->triggerWeight = triggerWeight;
    this->triggerType = triggerType;
    this->safetyMechanisms = safetyMechanisms;
}

std::string TriggerMechanism::getTriggerMechanism() {
    return "Trigger Weight: " + std::to_string(triggerWeight) + "\nTrigger Type: " + triggerType + "\nSafety Mechanisms: " + safetyMechanisms;
}

void TriggerMechanism::setTriggerMechanism(int triggerWeight, std::string triggerType, std::string safetyMechanisms) {
    this->triggerWeight = triggerWeight;
    this->triggerType = triggerType;
    this->safetyMechanisms = safetyMechanisms;
}

bool TriggerMechanism::operateSafety() {
    std::cout << "Safety engaged." << std::endl;
    return true;
}

#endif