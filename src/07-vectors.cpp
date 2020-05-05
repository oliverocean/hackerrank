#include <iostream>
#include <vector>

int main()
{
    const std::vector<int>setA{ 11, 12, 13, 14, 15, 16, 17, 18, 19 };
    std::vector<int>setB{ 21, 22, 23, 24, 25, 26, 27, 28, 29 }; // not const as function modifies it later
    const std::vector<int>setC{ 31, 32, 33, 34, 35, 36, 37, 38, 39 };

    // vector A
    std::cout << "\n--- Vector A ---\n";
    std::cout << "Original:\n";
    for (unsigned long n{0}; n < setA.size(); ++n) {
        std::cout << setA[n] << " ";
    }
    // Reverse using a decrementing iterator
    std::cout << "\nReversed:\n";
    for (unsigned long m{setA.size() - 1}; (m + 1) > 0 ; --m) {
        std::cout << setA[m] << " ";
    }

    // vector B
    std::cout << "\n\n--- Vector B ---\n";
    std::cout << "Original:\n";
    for (unsigned long p{0}; p < setB.size(); ++p) {
        std::cout << setB[p] << " ";
    }
    // Using STL reverse(). Note: modifies vector (not const)
    std::cout << "\nReversed:\n";
    reverse(setB.begin(), setB.end());
    for (unsigned long q{0}; q < setB.size(); ++q) {
        std::cout << setB[q] << " ";
    }

    // vector C
    std::cout << "\n\n--- Vector C ---\n";
    std::cout << "Original:\n";
    for (unsigned long r{0}; r < setC.size(); ++r) {
        std::cout << setC[r] << " ";
    }
    // Using rbegin() and rend() as iterator values - does not modify vector (const)
    // Note, because rbegin()/rend() are pointers, can use dereferencing for output.
    std::cout << "\nReversed:\n";
    for (auto s(setC.rbegin()); s != setC.rend(); ++s) {
        std::cout << *s << " ";
    }

    return 0;
}