/**
 * @brief   Process input with conditional statements
 *
 * @details Given an integer, n, perform the following conditional actions:
 *          -> If n is odd, print 'Flagged'
 *          -> If n is even and in the range 2 to 5, print 'Passed'
 *          -> If n is even and in the range 6 to 20, print 'Flagged'
 *          -> If n is even and greater than 20, print 'Passed'
 */

#include <iostream>

int main()
{
    int userInput{};
    std::cout << "Enter a number between 1 and 25: \n";
    std::cin >> userInput;
    if ((userInput % 2 != 0) || (userInput >= 6 && userInput <= 20)) {
            std::cout << "\n" << userInput << ": Flagged.\n";
        } else if ((userInput >= 2 && userInput <= 5) || (userInput > 20)) {
            std::cout << "\n" << userInput << ": Passed.\n";
        } else {
            // catch everything else.
    }
    return 0;
}