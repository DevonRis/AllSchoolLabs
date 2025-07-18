#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*makes the most sense to me since 
this is how i program as a C# Developer 
and how i could visualize a Full Stack flow*/

//Wanted my properties(My Model) below first
class AscIIModel {
public:
    int codeID;
    string codeSymbol;
};


//My In-between. My repository/or AppDbContext
class AscIITableRepo {
public:
    vector<AscIIModel> GetAscIITable() 
    {
        return ascIITable;
    }

//Pretending this is my actual Database
private:
    vector<AscIIModel> ascIITable = 
    {
        {1, "!"}, {2, "''"}, {3, "#"}, {4, "$"}, {5, "%"}, {6, "&"}, {7, "'"}, {8, "("},
        {9, ")"}, {10, "*"}, {11, "+"}, {12, ","}, {13, "-"}, {14, "."}, {15, "/"}, {16, "0"},
        {17, "1"}, {18, "2"}, {19, "3"}, {20, "4"}, {21, "5"}, {22, "6"}, {23, "7"}, {24, "8"},
        {25, "9"}, {26, ":"}, {27, ";"}, {28, "<"}, {29, "="}, {30, ">"}, {31, "?"}, {32, "@"},
        {33, "A"}, {34, "B"}, {35, "C"}, {36, "D"}, {37, "E"}, {38, "F"}, {39, "G"}, {40, "H"},
        {41, "I"}, {42, "J"}, {43, "K"}, {44, "L"}, {45, "M"}, {46, "N"}, {47, "O"}, {48, "P"},
        {49, "Q"}, {50, "R"}, {51, "S"}, {52, "T"}, {53, "U"}, {54, "V"}, {55, "W"}, {56, "X"},
        {57, "Y"}, {58, "Z"}, {59, "["}, {60, "\\"}, {61, "]"}, {62, "^"}, {63, "_"}, {64, "`"},
        {65, "a"}, {66, "b"}, {67, "c"}, {68, "d"}, {69, "e"}, {70, "f"}, {71, "g"}, {72, "h"},
        {73, "i"}, {74, "j"}, {75, "k"}, {76, "l"}, {77, "m"}, {78, "n"}, {79, "o"}, {80, "p"},
        {81, "q"}, {82, "r"}, {83, "s"}, {84, "t"}, {85, "u"}, {86, "v"}, {87, "w"}, {88, "x"},
        {89, "y"}, {90, "z"}, {91, "{"}, {92, "|"}, {93, "}"}, {94, "~"}, {95, "DEL"}
    };
};

/*
Pretending this is inside my main(Program.cs) or would 
be my "UI" where i'd display my Data(View.cshtml)
*/
int main()
{
    //Maybe pretend this is my controller here
    AscIITableRepo ascIITableRepo;
    vector<AscIIModel> ascIITable = ascIITableRepo.GetAscIITable();
    string row = "";

    for (size_t code = 0; code < ascIITable.size(); ++code) 
    {
        row += ascIITable[code].codeSymbol + " ";

        if ((code + 1) % 16 == 0) 
        {
            cout << row << endl;
            row = "";
        }
    }
    if (!row.empty()) 
    {
        cout << row << endl;
    }

    //return View(ascIIModel); if C++ had a architectural style like C# (MVC)
    return 0; 
}