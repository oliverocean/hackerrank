#include <iostream>

int main() {

    int n{2}; // start at 2 (arbitrarily)
    for (int i{1}; i < 11; ++i) { // start iterator at 1, end at 10
        std::cout << std::to_string(n) << " x " << i << " = " << (n * i) << "\n";
    }
    return 0;
}