// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that uses local and global variables

#include <iostream>

int variable_x = 10;

void localVariables() {
    // Uses local variables

    int variable_x = 20;
    int variable_y = 50;
    int variable_z = variable_x + variable_y;
    std::cout << "variable_x, variable_y, variable_z | ";
    std::cout << variable_x << " + " << variable_y;
    std::cout << " = " << variable_z << std::endl;
}

void globalVariables() {
    // Uses global variables

    variable_x = variable_x + 5;
    int variable_y = 50;
    int variable_z = variable_x + variable_y;
    std::cout << "variable_x, variable_y, variable_z | ";
    std::cout << variable_x << " + " << variable_y;
    std::cout << " = " << variable_z << std::endl;
}

int main() {
    // Calls functions that use local and global variables

    localVariables();
    globalVariables();

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
