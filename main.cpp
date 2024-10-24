//This program will test if the counterType class is working properly. Try inputting the value of 10 the results should be 11 after incrementing, 9 after decrementing, 0 after resetting, and -1 after decrementing again.
//The expected input is an integer and will treat any input as such
#include "counterType.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Test 1: Value of counter with default constructor
    counterType defaultCounter;
    cout << "Default counter: ";
    defaultCounter.print(); // Expected output: 0

    // Test 2: Value of counter with user-supplied parameter
    int counter1;
    cout << "Please supply a integer value for the counter: ";
    cin >> counter1;
    counterType userCounter(counter1);
    cout << "User-supplied counter: ";
    userCounter.print(); // Expected output: what was inputted by user

    // Test 3: Result of an increment operation
    userCounter.incrementCounter();
    cout << "After incrementing: ";
    userCounter.print(); // Expected output: 6

    // Test 4: Result of a decrement operation
    userCounter.decrementCounter();
    cout << "After decrementing: ";
    userCounter.print(); // Expected output: 5

    // Test 5: Result of a reset operation
    userCounter.reset();
    cout << "After resetting: ";
    userCounter.print(); // Expected output: 0

    // Test 6: Result of attempting a decrement operation after reset
    userCounter.decrementCounter();
    cout << "After decrementing: ";
    userCounter.print(); // Expected output: -1

    return 0;
}