#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "headers\assaultrifle.h"

int main() {
    AssaultRifle ar;

    // We declare a variable of type int, float, string, and bool.
    int intVal;
    float floatVal;
    std::string strVal;
    bool boolVal;

    // Welcome message.
    std::cout << "Welcome to the Assault Rifle Simulator!" << std::endl;
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.get();

    // We create our barrel and ask the user for the length, material, and caliber.
    Barrel barrel;
    std::cout << "What size of barrel length would you like to use?" << std::endl;
    std::cin >> intVal;
    // While loop to check if the user input is an integer.
    do {
        std::cout << "What size of barrel length would you like to use?" << std::endl;
        std::cin >> intVal;
    } while (!isdigit(intVal));

    barrel.setBarrelLen(intVal);
    std::cout << "What material would you like to use on your barrel?" << std::endl;
    std::cin >> strVal;
    barrel.setBarrelMat(strVal);
    std::cout << "What caliber would you like to use on your barrel?" << std::endl;
    std::cin >> intVal;
    barrel.setBarrelCal(intVal);

    return 0;
}

#endif