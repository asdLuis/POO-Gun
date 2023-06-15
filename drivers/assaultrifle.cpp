/**
 * @file assaultrifle.cpp
 * @brief This is the implementation file for the Assault Rifle class.
 * @author Luis Isauro Zamano Morales
 * @date 2023-06-14
 */

#ifndef ASSAULTRIFLE_CPP
#define ASSAULTRIFLE_CPP

#include <iostream>
#include <string>

#include "../headers/assaultrifle.h" // Header file that contains the Assault Rifle class.

// Default constructor.

/**
 * @brief Construct a new Assault Rifle:: Assault Rifle object
*/

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

/**
 * @brief Construct a new Assault Rifle:: Assault Rifle object
 * 
 * @param barrel 
 * @param stock 
 * @param triggerMechanism 
 * @param fireSelector 
 * @param magazine 
 * @param sight 
 * @param handguard 
 * @param grip 
*/

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

// Getters

/**
 * @brief Assesmbles the Assault Rifle object
*/

void AssaultRifle::assemble() {
  for (int i = 0; i < 8; i++) {
    std::cout << "Assembling ";
    switch (i) {
      case 0:
        std::cout << "assault rifle..." << std::endl;
        break;
      case 1:
        std::cout << "barrel..." << std::endl;
        break;
      case 2:
        std::cout << "stock..." << std::endl;
        break;
      case 3:
        std::cout << "trigger mechanism..." << std::endl;
        break;
      case 4:
        std::cout << "fire selector..." << std::endl;
        break;
      case 5:
        std::cout << "magazine..." << std::endl;
        break;
      case 6:
        std::cout << "sight..." << std::endl;
        break;
      case 7:
        std::cout << "handguard..." << std::endl;
        break;
      case 8:
        std::cout << "grip..." << std::endl;
        break;
    }
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
  }
  std::cout << "Assault rifle assembled!" << std::endl;
}

/**
 * @brief Disassembles the Assault Rifle object
*/

void AssaultRifle::disassemble() {
  for (int i = 0; i < 8; i++) {
    std::cout << "Dissassembling ";
    switch (i) {
      case 0:
        std::cout << "assault rifle..." << std::endl;
        break;
      case 1:
        std::cout << "barrel..." << std::endl;
        break;
      case 2:
        std::cout << "stock..." << std::endl;
        break;
      case 3:
        std::cout << "trigger mechanism..." << std::endl;
        break;
      case 4:
        std::cout << "fire selector..." << std::endl;
        break;
      case 5:
        std::cout << "magazine..." << std::endl;
        break;
      case 6:
        std::cout << "sight..." << std::endl;
        break;
      case 7:
        std::cout << "handguard..." << std::endl;
        break;
      case 8:
        std::cout << "grip..." << std::endl;
        break;
    }
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
  }
  std::cout << "Assault rifle dissasembled!" << std::endl;
}

/**
 * @brief Shoots the Assault Rifle object
*/

void AssaultRifle::fire() {
    std::cout << "Pew pew pew!" << std::endl;
}

#endif
