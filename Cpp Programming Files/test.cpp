#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    vector<int> birthDayKeys = {1995, 2000, 1986, 1942, 1959, 1990, 2005};
    vector<string> employees = {"Jane", "John", "James", "Jack", "Jenny", "Devon", "Cory"};

    unordered_map<int, string> employeeInfo;

    if (birthDayKeys.size() == employees.size())
    {
        for (size_t i = 0; i < birthDayKeys.size(); i++)
        {
            employeeInfo[birthDayKeys[i]] = employees[i];
        }

        for (const auto& detail : employeeInfo)
        {
            cout << "Birthdays: " << detail.first << ", Names: " << detail.second << endl;
        }
    }
    else
    {
        cout << "Error: Keys and values must be the same." << endl;
    }
    return 0;
}