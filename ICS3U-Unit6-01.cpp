// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : December 2022
// ICS3U-Unit5-05.cpp File, learning functions with parameters in C++.

#include <iostream>
#include <random>

int main() {
    // creating variables
    const int AMOUNT = 10;
    int randomNumber;
    int number[AMOUNT];
    float sum = 0;
    float average;

    for (int counter = 0; counter < AMOUNT; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);
        randomNumber = idist(rgen);
        number[counter] = randomNumber;
        sum += randomNumber;
        std::cout << "Generated number: " << randomNumber << "\n";
    }

    average = sum / AMOUNT;
    std::cout << "\nThe Average of all numbers is " << average << ".";

    std::cout << "\n\n\nDone.\n";
}
