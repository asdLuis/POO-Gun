#ifndef FIRESELECTOR_H
#define FIRESELECTOR_H

#include <iostream>
#include <string>

class FireSelector {
    private:
        bool toggleSelector; // True = Automatic, False = Semi-Automatic
    
    public:
        FireSelector();
        FireSelector(bool toggleSelector);
        std::string getFireSelector();
        void setFireSelector(bool toggleSelector);
        void toggleFireSelector();
};

FireSelector::FireSelector() {
    toggleSelector = true;
};

FireSelector::FireSelector(bool toggleSelector) {
    this->toggleSelector = toggleSelector;
};

std::string FireSelector::getFireSelector() {
    if (toggleSelector) {
        return "Rate: Automatic";
    } else {
        return "Rate: Semi-Automatic";
    }
};

void FireSelector::setFireSelector(bool toggleSelector) {
    this->toggleSelector = toggleSelector;
};

void FireSelector::toggleFireSelector() {
    toggleSelector = !toggleSelector;
}

#endif