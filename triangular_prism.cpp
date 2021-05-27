// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program displays the middle grade of each mark

#include <iostream>
#include <string>

float CalculateVolume(float base, float height, float length) {
    // Calculates volume

    // Declaring volume
    float volume;

    // Process and output
    volume = (base * height) / 2 * length;

    return volume;
}


main() {
    // This function calls CalculateVolume

    // Declaring variables
    std::string baseInput;
    std::string heightInput;
    std::string lengthInput;
    float baseAsFloat;
    float heightAsFloat;
    float lengthAsFloat;
    float prismVolume;

    // Input
    std::cout << "Enter base of a triangular prism (cm): ";
    std::cin >> baseInput;
    std::cout << "Enter height (cm): ";
    std::cin >> heightInput;
    std::cout << "Enter length (cm): ";
    std::cin >> lengthInput;

    // Process and Output
    try {
        baseAsFloat = std::stof(baseInput);
        heightAsFloat = std::stof(heightInput);
        lengthAsFloat = std::stof(lengthInput);
        prismVolume = CalculateVolume(
            baseAsFloat, heightAsFloat, lengthAsFloat);
        if (prismVolume > 0) {
            std::cout << "The volume of the prism is " <<  prismVolume
            << " cm³." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid dimensions" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
