#include "QuizGrades.h"
#include "GradesEnum.h"
#include "EnumExtensionMethods.h"
#include <numeric>
#include <cmath>

pair<string, int> QuizGrades::ProcessQuizScoreInput(const vector<int>& quizScores) {
    int quizScoresArray[10];
    copy(quizScores.begin(), quizScores.end(), quizScoresArray);

    int sum = accumulate(quizScoresArray, quizScoresArray + quizScores.size(), 0);
    int average = static_cast<int>(round(static_cast<double>(sum) / quizScores.size()));

    if (average >= static_cast<int>(Grades::A))
        return { getEnumDescription(Grades::A), average };
    else if (average >= static_cast<int>(Grades::B))
        return { getEnumDescription(Grades::B), average };
    else if (average >= static_cast<int>(Grades::C))
        return { getEnumDescription(Grades::C), average };
    else if (average >= static_cast<int>(Grades::D))
        return { getEnumDescription(Grades::D), average };
    else
        return { getEnumDescription(Grades::F), average };
}
