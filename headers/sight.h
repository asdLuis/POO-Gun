#ifndef SIGHT_H
#define SIGTH_H

#include <iostream>
#include <string>

class Sight {
    private:
        std::string type;
        float radius;
    
    public:
        Sight();
        Sight(std::string type, float radius);
        std::string getSight();
        void setSight(std::string, float);
};

Sight::Sight() {
    type = "0";
    radius = 0;
}

Sight::Sight(std::string type, float radius) {
    this->type = type;
    this->radius = radius;
}

std::string Sight::getSight() {
    return "Type: " + type + "\nRadius: " + std::to_string(radius);
}

void Sight::setSight(std::string type, float radius) {
    this->type = type;
    this->radius = radius;
}

#endif