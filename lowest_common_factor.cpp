// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program can calculate the lowest common factor

#include <iostream>
#include <string>

int main()  {
    // this function can tell the user what the two numbers' LCM is

    std::string firstString;
    std::string secondString;
    int firstInteger;
    int secondInteger;
    int greater;

    std::cout << "This program can calculate the LCM of two integers"
              << "\n" << std::endl;

    // input
    std::cout << "Enter in a positive integer: " << std::endl;
    std::cin >> firstString;
    std::cout << "Enter in a positive integer: " << std::endl;
    std::cin >> secondString;
    std::cout << "\n" << std::endl;

    // process and output
    try {
        firstInteger = std::stoi(firstString.c_str());
        secondInteger = std::stoi(secondString.c_str());

        if (firstInteger > secondInteger) {
            greater = firstInteger;
        } else {
            greater = secondInteger;
        }
        if (firstInteger == 0 || secondInteger == 0) {
            std::cout << "We can't accept 0. Try again" << std::endl;
        } else {
            if (firstInteger > 0 && secondInteger > 0) {
                while (greater % firstInteger != 0 ||
                       greater % secondInteger != 0) {
                           greater = greater + 1;
                }
                std::cout << "The lowest common factor is "
                          << greater << std::endl;
            } else {
                std::cout << "This is a negative integer" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}
