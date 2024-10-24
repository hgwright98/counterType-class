#include "counterType.h"
#include <iostream>
using namespace std;

//The center is initialized to 0 or to a nonnegative integer by the client
counterType::counterType() {
    counter = 0;
}
//Postconditions: The counter is initialized.

//Preconditions: The counter instance has been initialized.
counterType::counterType(int initialValue) {
    counter = initialValue;
}
//Postconditions: The counter value is 0.
void counterType::reset() {
    counter = 0;
}
//Preconditions: The counter instance value is an integer.
void counterType::setCounter(int value) {
    counter = value;
}
//Postconditions: The counter value is set.

//Preconditions: The counter instance exists.
void counterType::incrementCounter() {
    counter++;
}
//Postconditions: The counter value is increased by 1.

//Preconditions: The counter instance exists.
void counterType::decrementCounter() {
    counter--;
}
//Postconditions: The counter value is decreased by 1.

//Preconditions: The counter instance exists.
int counterType::getCounter() {
    return counter;
}
//Postconditions:  The function returns the current value of the counter as an integer.

//Preconditions: The counter instance exists.
void counterType::print() {
    cout << counter << endl;
}
//Postconditions: The current value of the counter is printed to the console.