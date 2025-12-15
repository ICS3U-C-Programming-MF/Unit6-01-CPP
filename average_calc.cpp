
// copyright Maximiliano Fairman Dec 15rd, 2025
// all rights reserved
// Generates 10 random numbers and calculates their average
// Uses a loop (no built-in average functions)

#include <cstdlib>
#include <ctime>
#include <iostream>


int main() {
    // Constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Declare array
    int arrayOfInt[MAX_ARRAY_SIZE];

    // Seed random number generator
    srand(time(0));

    // Generate random numbers
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        arrayOfInt[i] = rand()  // NOLINT(runtime/threadsafe_fn)
        % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
    }

    // Print numbers
    std::cout << "Generated numbers:\n";
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        std::cout << arrayOfInt[i] << " ";
    }
    std::cout << std::endl;

    // Calculate the average using a loop
    int sum = 0;
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        sum += arrayOfInt[i];
    }

    double average = static_cast<double>(sum) / MAX_ARRAY_SIZE;

    // Display average
    std::cout << "Average: " << average << std::endl;

    return 0;
}
