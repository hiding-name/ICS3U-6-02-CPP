// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Dec 2019
// This program makes random number and finds average

#include <iostream>
#include <list>


int LargestNumber(std::list<int> numbers) {
    // This is finds largest number in a list

    int lastNumber = 0;
    int largest = 0;

    for (int number : numbers) {
        if (number > lastNumber) {
            largest = number;
            lastNumber = number;
        }
    }
    return largest;
}

main() {
    // This is generate 10 random number from 0-10 and figures out averag

    // Sets seed as time
    srand(time(NULL));

    // variables
    int repeater;
    int number;
    int largest;
    std::list<int> numbers;

    // process
    for (repeater = 0; repeater < 10; repeater++) {
        number = rand() % 100 + 1;
        numbers.push_back(number);
        // output
        std::cout << number << std::endl;
    }
    largest = LargestNumber(numbers);

    // output
    std::cout << "\nThe largest is " << largest << std::endl;
}
