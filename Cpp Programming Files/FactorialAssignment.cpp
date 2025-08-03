#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
/*
"What is the largest factorial value you can calculate?"

=> Largest safe value is 12! => (479,001,600). Values greater exceeds 
the "32-bit Int" limit (2,147,483,647), resulting in incorrect output.

"What happens if you enter a negative value?"

=> An error will be thrown stating that factorials cannot be calculated for negative values.
*/
using namespace std;

class NumMethod {
public:
    static int Factorial(int inputNumber) {
        if (inputNumber <= 1)
            return 1;
        else
            return inputNumber * Factorial(inputNumber - 1);
    }
};

int main()
{
    bool exitProgram = false;
    while (!exitProgram) 
    {
        cout << "For this program, Enter a non-negative integer to calculate its factorial (or type 'q' to quit): ";
        string input;
        getline(cin, input);

        input.erase(0, input.find_first_not_of(" \t\n\r\f\v"));
        input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);

        if (input == "q" || input == "Q") {
            exitProgram = true;
            break;
        }

        try
        {
            int inputNumber = stoi(input);

            if (inputNumber < 0)
                throw invalid_argument("Factorials will not work for negative numbers (your input: " + to_string(inputNumber) + ")");

            if (inputNumber > 12) {
                exitProgram = true;
                string message = (inputNumber <= 33)
                    ? "Factorials greater than 12 will exceed `int` limits and cannot be calculated accurately (your input: " + to_string(inputNumber) + ")."
                    : "Factorials greater than 33 are too large for recursion, and also exceed `int` limits (your input: " + to_string(inputNumber) + ").";
                throw invalid_argument(message);
            }

            int result = NumMethod::Factorial(inputNumber);
            cout << inputNumber << "! = " << result << endl;
        }
        catch(const invalid_argument& exception)
        {
            cout << "Error: " << exception.what() << endl;
        }
    }
    return 0;
}