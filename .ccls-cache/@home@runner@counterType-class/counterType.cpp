#include <iostream>
#include "counterType.h"

// Constructor
counterType::counterType(int initial_value) : counter(initial_value) {}

// Reset the counter
void counterType::reset() {
    counter = 0;
}

// Set the counter to a specified value
void counterType::set_counter(int value) {
    counter = value;
}

// Increment the counter
void counterType::increment_counter() {
    counter++;
}

// Decrement the counter
void counterType::decrement_counter() {
    counter--;
}

// Get the current counter value
int counterType::get_counter() const {
    return counter;
}

// Print the current counter value
void counterType::print() const {
    std::cout << "Current counter value: " << counter << std::endl;
}