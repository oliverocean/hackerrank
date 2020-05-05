//
// @requirements: convert base 10 into base 2, add up highest series of consecutive 1's
//
// @notes: Method b was initial approach, works ok but doesn't handle large numbers. Additionally, the given
// requirements don't include base 2 output, thus the vector to store the converted number represented scope creep.
//
// Method A matches the requirements more accurately.
//

#include <iostream>
#include <vector>

int main() {

    int baseTen{47}; // arbitrary base10 input to evaluate
    int candidate{0};
    int largest{0};

    while (baseTen > 0) {
        if (baseTen % 2 == 0) {
            candidate = 0;
        }
        else {
            ++candidate;
        }
        baseTen /= 2;
        if (candidate > largest) {
            largest = candidate;
        }
    }

    std::cout << "\n--- Results (method A) ---\n";
    std::cout << "Largest series of consecutive 1's is: " << largest << "\n";

    int base10{47}; // arbitrary base10 input to evaluate
    int baseTwoSize{8}; // arbitrarily limit base2 output to 8 chars, for example 23 = 00010111

    std::vector<int>base2{};
    int remainder{};
    int base10Temp{base10};

    for (int x{baseTwoSize}; x > 0; --x) {
        remainder = base10Temp % 2;
        base2.insert(base2.begin(), remainder);
        base10Temp = base10Temp / 2;
    }

    int largestSeries{0}; // largest series of '1's found (so far)
    int candidateSeries{0}; // add a consecutive series of '1's

    for (auto& c : base2) {
        if (c == 1) {
            ++candidateSeries;
        }
        else if (c == 0) {
            candidateSeries = 0; // reset candidate when current sequence of '1's has ended
        }
        if (candidateSeries > largestSeries) {
            // note: a bit inefficient to evaluate every loop... alternatively could evaluate
            // when 0 is found, then another eval after exiting loop... but that sounds kinda ugly.
            largestSeries = candidateSeries;
        }
    }

    std::cout << "\n--- Results (method B) ---\n";
    std::cout << "The Base10 Number is: " << base10 << "\n";
    std::cout << "The Base2 Number is: ";
    for (auto& i : base2) {
        std::cout << i;
    }

    std::cout << "\nLargest series of consecutive 1's is: " << largestSeries << "\n";

    return 0;
}