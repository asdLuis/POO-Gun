#ifndef ASSAULTRIFLE_H
#define ASSAULTRIFLE_H

#include <iostream>
#include <string>

#include "./grip.h"
#include "./handguard.h"
#include "./sight.h"
#include "./stock.h"
#include "./triggermechanism.h"
#include "./magazine.h"
#include "./fireselector.h"
#include "./barrel.h"

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

AssaultRifle::AssaultRifle() {
    barrel = Barrel();
    stock = Stock();
    triggerMechanism = TriggerMechanism();
    fireSelector = FireSelector();
    magazine = Magazine();
    sight = Sight();
    handguard = Handguard();
    grip = Grip();
}

AssaultRifle::AssaultRifle(Barrel barrel, Stock stock, TriggerMechanism triggerMechanism, FireSelector fireSelector, Magazine magazine, Sight sight, Handguard handguard, Grip grip) {
    this->barrel = barrel;
    this->stock = stock;
    this->triggerMechanism = triggerMechanism;
    this->fireSelector = fireSelector;
    this->magazine = magazine;
    this->sight = sight;
    this->handguard = handguard;
    this->grip = grip;
}

void AssaultRifle::assemble() {
    std::cout << "Assembling assault rifle..." << std::endl;
    std::cout << "Assembling barrel..." << std::endl;
    std::cout << "Assembling stock..." << std::endl;
    std::cout << "Assembling trigger mechanism..." << std::endl;
    std::cout << "Assembling fire selector..." << std::endl;
    std::cout << "Assembling magazine..." << std::endl;
    std::cout << "Assembling sight..." << std::endl;
    std::cout << "Assembling handguard..." << std::endl;
    std::cout << "Assembling grip..." << std::endl;
    std::cout << "Assault rifle assembled!" << std::endl;
}

void AssaultRifle::disassemble() {
    std::cout << "Disassembling assault rifle..." << std::endl;
    std::cout << "Disassembling barrel..." << std::endl;
    std::cout << "Disassembling stock..." << std::endl;
    std::cout << "Disassembling trigger mechanism..." << std::endl;
    std::cout << "Disassembling fire selector..." << std::endl;
    std::cout << "Disassembling magazine..." << std::endl;
    std::cout << "Disassembling sight..." << std::endl;
    std::cout << "Disassembling handguard..." << std::endl;
    std::cout << "Disassembling grip..." << std::endl;
    std::cout << "Assault rifle disassembled!" << std::endl;
}

void AssaultRifle::fire() {
    std::cout << "Pew pew pew!" << std::endl;
}

#endif