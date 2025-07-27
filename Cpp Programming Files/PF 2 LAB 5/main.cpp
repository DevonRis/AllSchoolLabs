/*
---QUESTION BEING ASKED: "What does it output, is that what you expected?"---

The OUTPUT is the following after commands (g++ main.cpp Mammal.cpp Dog.cpp -o main/./main.exe)

-Mammal constructor...
-Dog constructor.
-The Dog that's a mammal, moves a step!
-What does a Dog speak? Mammilian!
-The Dog, which is a mammal, its current age is 7
-Dog destructor.
-Mammal destructor...

As far as if that was expected, i only expected just the following below:

-Dog constructor.
-The Dog that's a mammal, moves a step!
-What does a Dog speak? Mammilian!
-The Dog, which is a mammal, its current age is 7
-Dog destructor.

But i suppose that it makes sense that it would also display the constructor statement as well because i'm pulling in from mammal.
The code/code in included files shows how Polymorphism works and how constructors, destructors, classes & inheritance work together.
*/
#include "Task1.h"
#include "Mammal.h"
#include "Dog.h"

int main(void)
{
    /*Base* ptr = new Base;
    ptr -> testFunction();// prints "Base class"
    delete ptr;

    ptr = new Derived;
    ptr -> testFunction();// prints "Base class" because the base class function is not virtual
    delete ptr;*/

    //Mammal/Dog section
    int age = 7;
    Mammal *pDog = new Dog(age);

    pDog->Move();
    pDog->Speak();
    cout << "The Dog, which is a mammal, its current age is " << pDog->GetAge() << endl;

    delete pDog;

    return 0;
}