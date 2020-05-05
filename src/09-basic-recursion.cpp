#include <iostream>

// basic recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        //std::cout << "n is " << n << "\n";
        return n * factorial(n - 1);
    }
}

int main()
{
    int n{7}; // using 4 as an example
    std::cout << "\nCalculating " << n << "!\n";
    int result = factorial(n);
    std::cout << "\nThe final result is: " << result << "\n";

    return 0;
}