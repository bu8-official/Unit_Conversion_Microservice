#include <iostream>
#include <string>
#include <iomanip>

// Function to convert meters to feet
double metersToFeet(double meters) {
    return meters * 3.28084;
}

// Function to convert feet to meters
double feetToMeters(double feet) {
    return feet * 0.3048;
}

int main() {
    int choice;
    double value;

    std::cout << "Unit Conversion Service\n";
    std::cout << "----------------------\n";
    std::cout << "1. Meters to Feet\n";
    std::cout << "2. Feet to Meters\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    if (choice != 1 && choice != 2) {
        std::cout << "Invalid choice. Exiting...\n";
        return 1;
    }

    std::cout << "Enter the value to convert: ";
    std::cin >> value;

    double result;
    std::string fromUnit, toUnit;

    if (choice == 1) {
        result = metersToFeet(value);
        fromUnit = "meters";
        toUnit = "feet";
    } else {
        result = feetToMeters(value);
        fromUnit = "feet";
        toUnit = "meters";
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << value << " " << fromUnit << " is equal to " << result << " " << toUnit << std::endl;

    return 0;
}
