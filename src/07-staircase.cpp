#include <iostream>
#include <array>
//#include <iomanip>

int main() {

    int userInput{10}; // sample value

    for (int i{0}; i < userInput; ++i) {
        for (int j{0}; j < userInput; ++j) {
            if (j < userInput - i) {
                std::cout << "  ";
            }
            else {
                std::cout << " #";
            }
        }
        std::cout << "\n";
    }
    //std::cout << " " << std::right << std::setfill('#') << std::setw(USER_INPUT * 2) << "\n";

    return 0;
}