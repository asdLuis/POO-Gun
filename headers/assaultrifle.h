#ifndef ASSAULTRIFLE_H
#define ASSAULTRIFLE_H

#include <iostream>
#include <string>

#include "../drivers/grip.cpp"
#include "../drivers/handguard.cpp"
#include "../drivers/sight.cpp"
#include "../drivers/stock.cpp"
#include "../drivers/triggermechanism.cpp"
#include "../drivers/magazine.cpp"
#include "../drivers/fireselector.cpp"
#include "../drivers/barrel.cpp"

class AssaultRifle {
    private:
        Barrel barrel;
        Stock stock;
        TriggerMechanism triggerMechanism;
        FireSelector fireSelector;
        Magazine magazine;
        Sight sight;
        Handguard handguard;
        Grip grip;
    public:
        AssaultRifle();
        AssaultRifle(Barrel barrel, Stock stock, TriggerMechanism triggerMechanism, FireSelector fireSelector, Magazine magazine, Sight sight, Handguard handguard, Grip grip);
        void assemble();
        void disassemble();
        void fire();
};

#endif