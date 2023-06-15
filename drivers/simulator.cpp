/**
 * @file simulator.cpp
 * @author Luis Isauro Zamano Morales
 * @brief Simulator file for the Gun Assembly Simulator.
 * @date 2023-05-29
 */

#ifndef SIMULATOR_CPP
#define SIMULATOR_CPP

#include "../headers/simulator.h"

// Default constructor.

/**
 * @brief Construct a new Simulator:: Simulator object
 * 
 */

Simulator::Simulator() {
    ar.assemble();
}

/**
 * @brief Destroy the Simulator:: Simulator object
 * 
 */

Simulator::~Simulator() {
    delete &ar;
    std::cout << "Thank you for using the Assault Rifle Simulator!" << std::endl;
    std::cout << "Press enter to exit..." << std::endl;
    std::cin.get();
}

/**
 * @brief Create a new Simulation
*/

void Simulator::createNewSimulator() {
    std::cout << "Welcome to the Assault Rifle Simulator!" << std::endl;
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.get();

    Barrel barrel; // Create an instance of the Barrel class.
    barrel.createBarrel(); 
    std::cout << "Barrel created: " << barrel.getBarrel() << std::endl; // Print the barrel created.

    Sight sight; // Create an instance of the Sight class.
    sight.createSight();
    std::cout << "Sight created: " << sight.getSight() << std::endl; // Print the sight created.

    Stock stock; // Create an instance of the Stock class.
    stock.createStock();
    std::cout << "Stock created: " << stock.getStock() << std::endl; // Print the stock created.

    FireSelector fireSelector; // Create an instance of the FireSelector class.
    fireSelector.createFireSelector();
    std::cout << "Fire selector created: " << fireSelector.getFireSelector() << std::endl; // Print the fire selector created.

    Handguard handguard; // Create an instance of the Handguard class.
    handguard.createHandguard();
    std::cout << "Handguard created: " << handguard.getHandguard() << std::endl; // Print the handguard created.

    Grip grip; // Create an instance of the Grip class.
    grip.createGrip();
    std::cout << "Grip created: " << grip.getGrip() << std::endl; // Print the grip created.

    TriggerMechanism triggerMechanism; // Create an instance of the TriggerMechanism class.
    triggerMechanism.createTriggerMechanism();
    std::cout << "Trigger mechanism created: " << triggerMechanism.getTriggerMechanism() << std::endl; // Print the trigger mechanism created.

    Magazine magazine; // Create an instance of the Magazine class.
    magazine.createMagazine();
    std::cout << "Magazine created: " << magazine.getMagazine() << std::endl; // Print the magazine created.
    
}

/**
 * @brief Clear the screen
*/

void Simulator::clearScreen() {
    // Check OS
    #ifdef _WIN32
        system("cls");
    #elif __linux__
        system("clear");
    #elif __APPLE__
        system("clear");
    #else
        std::cout << "\033[2J\033[1;1H";
    #error "OS not supported!"
    #endif  
}

#endif 