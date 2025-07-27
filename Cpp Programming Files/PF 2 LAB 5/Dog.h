#pragma once
#include "Mammal.h"

//Below is where Dog class Inherits the mammal class and will override its functions
class Dog : public Mammal {
public:
    Dog(int age);
    ~Dog();
    //These two will basically ignore the original MOVE & SPEAK in Mammal.h
    //and prioritize the MOVE & SPEAK in Dog.cpp(override)

    void Move() const override;
    void Speak() const override;
};