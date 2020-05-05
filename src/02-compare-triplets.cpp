#include <iostream>
#include <vector>

int main() {

    std::vector<int>setA{ 11, 21, 31, 51, 44, 63, 33, 48 };
    std::vector<int>setB{ 30, 25, 51, 43, 44, 62, 77, 83 };
    std::vector<int>theResults{0, 0};

    std::cout << "\n--- The Comparison ---";
    for (int i{0}; i < setA.size(); ++i) {
        std::cout << "\nRound " << i + 1 << ": ";
        if (setA[i] > setB[i]) {
            theResults[0]++;
            std::cout << "[ " << setA[i] << " > " << setB[i] << " ] ---> a++";
        } else if (setA[i] < setB[i]) {
            theResults[1]++;
            std::cout << "[ " << setA[i] << " < " << setB[i] << " ] ---> b++";
        } else {
            std::cout << "[ " << setA[i] << " = " << setB[i] << " ] ---> equal or invalid";
        }
    }
    std::cout << "\n\n--- The Results--- \n";
    std::cout << "Set A was larger " << theResults[0] << " times\n";
    std::cout << "Set B was larger " << theResults[1] << " times\n";

    return 0;
}