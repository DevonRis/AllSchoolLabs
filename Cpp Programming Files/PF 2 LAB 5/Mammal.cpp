#include "Mammal.h"

Mammal::Mammal(int age):itsAge(age)
{
    cout << "Mammal constructor..." << endl;
}

int Mammal::GetAge() const {
    return itsAge;
}

Mammal::~Mammal(void)
{
    cout << "Mammal destructor..." << endl;
}

void Mammal::Move() const
{
    cout << "Mammal moves a step!" << endl;
}

void Mammal::Speak() const
{
    cout << "What does a mammal speak? Mammilian!" << endl;
}