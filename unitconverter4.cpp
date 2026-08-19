#include <iostream>
#include <iomanip>

void convertPressure() {
    std::cout << "\n--- Pressure / Stress Conversion ---\n";
    std::cout << "1. Pascal (Pa) to Bar\n";
    std::cout << "2. Bar to Pascal (Pa)\n";
    std::cout << "3. Megapascal (MPa) to N/mm^2 (Direct 1:1)\n";
    std::cout << "Select conversion (1-3): ";
    
    int choice;
    std::cin >> choice;
    
    double val;
    std::cout << "Enter value: ";
    std::cin >> val;

    std::cout << std::fixed << std::setprecision(4);
    if (choice == 1) {
        std::cout << "Result: " << val << " Pa = " << (val / 100000.0) << " Bar\n";
    } else if (choice == 2) {
        std::cout << "Result: " << val << " Bar = " << (val * 100000.0) << " Pa\n";
    } else if (choice == 3) {
        std::cout << "Result: " << val << " MPa = " << val << " N/mm^2\n";
    } else {
        std::cout << "Invalid choice.\n";
    }
}

void convertTemperature() {
    std::cout << "\n--- Temperature Conversion ---\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Celsius to Kelvin\n";
    std::cout << "Select conversion (1-2): ";
    
    int choice;
    std::cin >> choice;
    
    double val;
    std::cout << "Enter temperature: ";
    std::cin >> val;

    std::cout << std::fixed << std::setprecision(2);
    if (choice == 1) {
        double res = (val * 9.0 / 5.0) + 32.0;
        std::cout << "Result: " << val << " C = " << res << " F\n";
    } else if (choice == 2) {
        double res = val + 273.15;
        std::cout << "Result: " << val << " C = " << res << " K\n";
    } else {
        std::cout << "Invalid choice.\n";
    }
}

int main() {
    int choice = 0;
    while (choice != 3) {
        std::cout << "\n=== Mechanical Engineering Unit Converter (C++) ===\n";
        std::cout << "1. Pressure / Stress\n";
        std::cout << "2. Temperature\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose a category (1-3): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                convertPressure();
                break;
            case 2:
                convertTemperature();
                break;
            case 3:
                std::cout << "Exiting converter. Happy calculating!\n";
                break;
            default:
                std::cout << "Invalid input. Please choose 1, 2, or 3.\n";
        }
    }
    return 0;
}