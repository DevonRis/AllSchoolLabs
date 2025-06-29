#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    bool wouldNotLikeToContinue = true;

    while (wouldNotLikeToContinue) {
        cout << "Enter a set of numbers and I'll return the highest number I can make out of them: ";
        
        string input;
        getline(cin, input);

        int numberValueEntered = stoi(input.empty() ? "0" : input);
        vector<int> pluckedNumbers;

        while (numberValueEntered > 0) {
            pluckedNumbers.push_back(numberValueEntered % 10);
            numberValueEntered /= 10;
        }

        sort(pluckedNumbers.begin(), pluckedNumbers.end(), greater<int>());

        ostringstream rearrangedNumberStream;
        for (int digit : pluckedNumbers) {
            rearrangedNumberStream << digit;
        }

        int highestNumber = stoi(rearrangedNumberStream.str());

        cout << "Here is the highest number: " << highestNumber << ".\n";
        cout << "Would you like to continue? y for yes & n for no: ";

        string continueAnswer;
        getline(cin, continueAnswer);
        
        transform(continueAnswer.begin(), continueAnswer.end(), continueAnswer.begin(), ::tolower);

        if (continueAnswer == "n") {
            wouldNotLikeToContinue = false;
            break;
        }
    }

    return 0;
}