#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

//C++ Class creation
class Guitar {
public:
    string model;
    int strings;
    double price;
    vector<int> fretMarkers;
    vector<double> stringGauges;
};

int main() 
{
    //Creating the class
    vector<Guitar> guitars = {
        { "Stratocaster", 6, 999.99, {3, 5, 7, 9, 12}, {0.010, 0.013, 0.017} },
        { "Les Paul",     6, 1299.50, {3, 5, 7, 12},    {0.011, 0.015, 0.018} },
        { "Jazz Bass",    4, 1099.00, {3, 5, 7, 9, 12, 15}, {0.045, 0.065, 0.085} }
    };

    // Total strings
    int totalStrings = accumulate(guitars.begin(), guitars.end(), 0,
        [](int sum, const Guitar& g) { return sum + g.strings; });
    cout << "Total strings across all guitars: " << totalStrings << endl;

    // Total price
    double totalPrice = accumulate(guitars.begin(), guitars.end(), 0.0,
        [](double sum, const Guitar& g) { return sum + g.price; });
    cout << "Total price of all guitars: $" << totalPrice << endl;

    // Average price
    double avgPrice = totalPrice / guitars.size();
    cout << "Average guitar price: $" << avgPrice << endl;

    // Fret marker count
    for (const auto& guitar : guitars) 
    {
        cout << guitar.model << " has " << guitar.fretMarkers.size() << " fret markers." << endl;
    }

    // All string gauges combined
    vector<double> allGauges;
    for (const auto& g : guitars) 
    {
        allGauges.insert(allGauges.end(), g.stringGauges.begin(), g.stringGauges.end());
    }

    // Product of all string gauges
    double gaugeProduct = accumulate(allGauges.begin() + 1, allGauges.end(), allGauges[0],
        [](double a, double b) { return a * b; });
    cout << "Product of all string gauges: " << gaugeProduct << endl;

    // Max gauge
    double maxGauge = *max_element(allGauges.begin(), allGauges.end());
    cout << "Thickest string gauge used: " << maxGauge << endl;

    // Most expensive guitar
    auto topGuitar = *max_element(guitars.begin(), guitars.end(),
        [](const Guitar& a, const Guitar& b) { return a.price < b.price; });
    cout << "The most expensive guitar is the " << topGuitar.model
         << " at $" << topGuitar.price << endl;

    // Price range
    double maxPrice = max_element(guitars.begin(), guitars.end(),
        [](const Guitar& a, const Guitar& b) { return a.price < b.price; })->price;

    double minPrice = min_element(guitars.begin(), guitars.end(),
        [](const Guitar& a, const Guitar& b) { return a.price < b.price; })->price;
        
    double priceRange = maxPrice - minPrice;
    cout << "Price range between cheapest and most expensive: $" << priceRange << endl;

    return 0;
}