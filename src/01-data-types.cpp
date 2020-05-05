#include <iostream>
#include <iomanip>

int main() {

    // first set - set some values for each type
    int i{4};
    double d{4.0};
    std::string s {"Hello World "};

    // initialise a second set
    int userInt{};
    double userDouble{};
    std::string userString{};

    // ask user for second set values
    std::cout << "Enter an integer: \n";
    std::cin >> userInt;
    std::cout << "Enter a double: \n";
    std::cin >> userDouble;
    std::cout << "Enter a string: \n";
    getline(std::cin >> std::ws, userString);

    // add types as appropriate and print
    std::cout << "The sum of integers: " << i + userInt << "\n";
    std::cout << "The sum of doubles: " << std::fixed << std::setprecision(2) << d + userDouble << "\n";
    std::cout << "The concatenated string: " << s + userString << "\n";

    return 0;
}