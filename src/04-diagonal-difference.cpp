#include <iostream>
#include <vector>

int main() {

    std::cout << "\n--- Set A (first approach) ---\n";
    const std::vector<std::vector<int>> setA { // sample input
        { -11, 22, 47 },
        { -38, 52, 63 },
        { -10, 78, 12 }
    };
    for (auto& row : setA) {
        for (auto& item : row) {
            std::cout << item << " ";
        }
        std::cout << "\n";
    }

    int offsetA{0};
    unsigned long offsetB{setA.size() - 1};

    int diagonalA{0};
    int diagonalB{0};

    for (int n{0}; n < setA.size(); ++n) {
        diagonalA += setA[n][offsetA];
        diagonalB += setA[n][offsetB];
        offsetA++;
        offsetB--;
    }
    std::cout << "> Sum of Diagonal A: " << diagonalA << "\n";
    std::cout << "> Sum of Diagonal B: " << diagonalB << "\n";
    std::cout << "Absolute difference: " << abs(diagonalA - diagonalB) << "\n";

    // using iterator as offset
    std::cout << "\n--- Set B (second approach) ---\n";
    const std::vector<std::vector<int>> setB {
        { -87, 37, 28 },
        { -34, 22, 93 },
        { -56, 82, 75 }
    };
    for (auto& row : setB) {
        for (auto& item : row) {
            std::cout << item << " ";
        }
        std::cout << "\n";
    }

    int diagonalC{0};
    int diagonalD{0};

    for (int w{0}; w < setB.size(); ++w) {
        diagonalC += setB[w][w];
        diagonalD += setB[(setB.size() - 1) - w][w]; // also starts on column 0 but on bottom row!
    }
    std::cout << "> Sum of Diagonal C: " << diagonalC << "\n";
    std::cout << "> Sum of Diagonal D: " << diagonalD << "\n";
    std::cout << "Absolute difference: " << abs(diagonalC - diagonalD) << "\n";

    return 0;
}