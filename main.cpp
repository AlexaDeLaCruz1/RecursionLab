#include <iostream>
#include <string>
#include <limits> // Used for input validation
#include "recursiveFunctions.h"

int getNonNegativeIntInput(string prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        // Check if the input was not an integer
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            cout << "Invalid input. Please enter a whole number." << endl;
        } 
        // Check if the number is negative
        else if (value < 0) {
            cout << "Input cannot be negative. Try again." << endl;
        } 
        else {
            return value;
        }
    }
}

int getPositiveIntInput(string prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a whole number." << endl;
        } 
        else if (value < 1) {
            cout << "Input must be at least 1. Try again." << endl;
        } 
        else {
            return value;
        }
    }
}
