#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "QuizGrades.h"

using namespace std;

bool onlyNumbers(const string& stringInput) {
    if (stringInput.empty()) return false;

    for (char character : stringInput) 
    {
        if (!isdigit(character)) return false;
    }
    return true;
}

int main() {
    const int stopProgram = 999;
    vector<int> quizScores;
    bool userChoseToQuit = false;

    while (quizScores.size() < 10) 
    {
        cout << "Please enter a quiz score 0-100 until the program stops or 999 to quit. Score #" << quizScores.size() + 1 << ": ";
        string input;
        getline(cin, input);

        if (!onlyNumbers(input)) {
            cout << "Invalid input. Please enter only digits (0-100 or 999 to quit)." << endl;
            continue;
        }
        int score = stoi(input);

            if (score == stopProgram) 
            {
                userChoseToQuit = true;
                cout << "You've decided to stop the program." << endl;
                break;
            }
            quizScores.push_back(score);
    }

    if (!quizScores.empty() && !userChoseToQuit) 
    {
        pair<string, int> result = QuizGrades::ProcessQuizScoreInput(quizScores);

        cout << "The average of the quiz scores is a " << result.first
             << ", with a numerical score of " << result.second << "." << endl;

        if (result.first == "F") 
        {
            cout << "You have an F since your score was below a 60." << endl;
        }
    }
    return 0;
}