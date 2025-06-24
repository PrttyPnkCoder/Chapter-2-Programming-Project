#include <iostream>
#include <cmath>

int main() {
    const int   surveyed = 16500;
    const double pctDrinkers = 0.15;
    const double pctCitrus = 0.58;

    double drinkers = surveyed * pctDrinkers;
    double citrusFans = drinkers * pctCitrus;

    std::cout << "Customers buying energy drinks: "
        << static_cast<int>(std::round(drinkers)) << "\n";
    std::cout << "Customers preferring citrus flavor: "
        << static_cast<int>(std::round(citrusFans)) << "\n";

    return 0;
}