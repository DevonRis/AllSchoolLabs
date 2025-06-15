/*
- Devon Rismay | 6/15/2025
- Assignment Instructions:

(Considering that many people in the Houston area are in a position of still 
needing to rebuild their houses and finding themselves lacking in insurance, 
this program seems currently appropriate.)

Many financial experts advise property owners to insure their homes or building 
for at least 80% of the amount it would cost to replace the structure. Write a 
program that asks the user to enter the replacement cost of a building and then 
displays the minimum amount of insurance that should be purchased for the property.

-  (Enhance it enough to help me determine your level of knowledge of C++.)
*/
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const double INSURANCE_THRESHOLD = 0.8;
const double MINIMUM_INSURABLE_PROPERTY = 100000.0;

//global function
double calculateCoverageCost(double houseValue) {
    return houseValue * INSURANCE_THRESHOLD;
}

int main() 
{
    double houseValue;
    cout << "Please enter the total value of your home or building: ";
    cin >> houseValue;
    if(houseValue < MINIMUM_INSURABLE_PROPERTY)
    {
        cout << "Please enter a valid property value, we only insure properties $100,000 and up." << endl;
        cin.clear();
    }
    else
    {
        double minimumPurchaseCoverage = calculateCoverageCost(houseValue);
        cout << fixed << setprecision(2);
        cout << "You'll need to insure your property for the amount of $" << minimumPurchaseCoverage << endl;
        return 0;
    }
}