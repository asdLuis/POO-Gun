/**
 * @file main.cpp
 * @author Luis Isauro Zamano Morales
 * @brief Main file for the Gun Assembly Simulator.
 * @date 2023-05-29
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include <string>
#include <cctype>
#include "drivers\simulator.cpp"

int main() {
    Simulator sim;

    sim.createNewSimulator();

    return 0;
}

#endif