#pragma once

#include <iostream>
using std::cout;
using std::endl;

class Mammal
{
    public:
        Mammal(int age);
        virtual ~Mammal(void);

        virtual void Move() const;
        virtual void Speak() const;
        int GetAge() const;

      protected:
            int itsAge;
};