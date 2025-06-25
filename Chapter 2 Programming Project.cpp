// Description: Calculates and displays how far a car with a 20-gallon gas tank can travel in town and on the highway.
#include <iostream>
#include <iomanip>

int main() {
    const double tankSize = 20.0;   // gallons
    const double cityMpg = 23.5;
    const double highwayMpg = 28.9;

    double cityDistance = tankSize * cityMpg;
    double highwayDistance = tankSize * highwayMpg;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "On a full tank in town:    "
        << cityDistance << " miles.\n";
    std::cout << "On a full tank on highway: "
        << highwayDistance << " miles.\n";

    return 0;
}