#include <iostream>
#include <vector>

int main() {

    /* user inputs number of test cases */
    std::string howManyStrings{};
    std::cout << "How many strings? \n";
    getline(std::cin, howManyStrings);

    /* user inputs a string for each test case */
    std::vector<std::string>allTheStrings(stoul(howManyStrings));
    for (auto& inputString : allTheStrings) {
        std::cout << "Enter a string: \n";
        getline(std::cin, inputString);
    }

    /* output the even letters, then odd letters, for each string */
    std::cout << "\n--- Results ---\n";
    for (auto& readString : allTheStrings) {
        std::cout << "Output: ";
        for (int e {0}; e < readString.size(); ++e) {
            if (e % 2 == 0) {
                std::cout << readString[e];
            }
        }
        std::cout << " ";
        for (int d{0}; d < readString.size(); ++d) {
            if (d % 2 != 0) {
                std::cout << readString[d];
            }
        }
        std::cout << "\n";
    }

return 0;
}