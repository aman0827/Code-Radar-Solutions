include <iostream>
#include <iomanip> // For setting precision

int main() {
    double num;

    std::cout << "Enter a double-precision floating-point number: ";
    std::cin >> num;

    std::cout << "You entered: " << std::fixed << std::setprecision(4) << num << std::endl; 

    return 0;
}