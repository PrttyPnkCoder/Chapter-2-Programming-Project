// Description: Calculates and prints the ocean’s projected rise (in mm)
#include <iostream>
#include <iomanip>

int main() {
    const double riseRate = 1.5;        // mm per year
    int years[] = { 5, 7, 10 };

    std::cout << std::fixed << std::setprecision(1);
    for (int y : years) {
        double increase = riseRate * y;
        std::cout << "In " << y
            << " years, ocean will be "
            << increase << " mm higher.\n";
    }
    return 0;
}