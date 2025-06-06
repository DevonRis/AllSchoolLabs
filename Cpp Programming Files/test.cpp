#include <iostream>
#include <vector>
#include <unordered_map>


int main() {
    std::vector<int> birthDayKeys = {1995, 2000, 1986, 1942, 1959, 1990, 2005};
    std::vector<std::string> employees = {"Jane", "John", "James", "Jack", "Jenny", "Devon", "Cory"};

    std::unordered_map<int, std::string> employeeInfo;

    if (birthDayKeys.size() == employees.size())
    {
        for (size_t i = 0; i < birthDayKeys.size(); i++)
        {
            employeeInfo[birthDayKeys[i]] = employees[i];
        }

        for (const auto& detail : employeeInfo)
        {
            std::cout << "Birthdays: " << detail.first << ", Names: " << detail.second << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Keys and values must be the same." << std::endl;
    }
    return 0;
}