#pragma once
#include <vector>
#include <string>
using namespace std;

class QuizGrades {
public:
    static pair<string, int> ProcessQuizScoreInput(const vector<int>& quizScores);
};
