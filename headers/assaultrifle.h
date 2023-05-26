#ifndef ASSAULTRIFLE_H
#define ASSAULTRIFLE_H

#include <iostream>
#include <string>

#include "headers\grip.h"
#include "headers\handguard.h"
#include "headers\sight.h"
#include "headers\stock.h"
#include "headers\triggermechanism.h"
#include "headers\magazine.h"
#include "headers\fireselector.h"
#include "headers\barrel.h"

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
}

AssaultRifle::AssaultRifle() {
    barrel = NULL;
    stock = NULL;
    triggerMechanism = NULL;
    fireSelector = NULL;
    magazine = NULL;
    sight = NULL;
    handguard = NULL;
    grip = NULL;
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