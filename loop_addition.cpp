// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program calculates the sum of all positive integers between
//      0 and a user input

#include <iostream>
#include <string>

int main() {
    // this function will calculate the sum of positive numbers
    //      between 0 and user input

    std::cout << "This program adds up all the positive numbers "
              << "from 0 to a user's input." << std::endl;

    // variable declarations
    int loopCounter = 0;
    int numberSum = 0;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt > 0) {
            while (loopCounter < userInputInt) {
                numberSum = numberSum + (loopCounter + 1);
                loopCounter = loopCounter + 1;
            }
            // output
            std::cout << "The sum of all the positive numbers between 0 "
                      << "and " << userInputInt << " is " << numberSum
                      << "." << std::endl;
        } else {
            // output
            std::cout << userInputInt << " is not a positive integer!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }
}
