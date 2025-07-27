#include "Dog.h"

Dog::Dog(int age) : Mammal(age) {
    cout << "Dog constructor." << endl;
}

Dog::~Dog() {
    cout << "Dog destructor." << endl;
}

void Dog::Move() const {
    cout << "The Dog that's a mammal, moves a step forward!" << endl;
}

void Dog::Speak() const {
    cout << "What does a Dog speak? Mammilian!" << endl;
}