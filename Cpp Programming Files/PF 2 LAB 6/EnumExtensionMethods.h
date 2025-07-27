#pragma once
#include <string>
#include "GradesEnum.h"
using namespace std;

inline string getEnumDescription(Grades grade) 
{
    switch (grade) 
    {
        case Grades::A: return "A";
        case Grades::B: return "B";
        case Grades::C: return "C";
        case Grades::D: return "D";
        case Grades::F: return "F";
        default: return "Unknown";
    }
}