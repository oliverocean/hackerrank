#include <iostream>

int main() {

    // input from user
    int arraySize{0};
    std::cin >> arraySize;

    int anArray[arraySize];
    for (int x = 0; x < arraySize; ++x) {
        std::cin >> anArray[x];
    }

    // output results in reverse
    for (int y = (arraySize - 1); y >= 0 ; --y) {
        std::cout << anArray[y] << " ";
    }

    return 0;
}