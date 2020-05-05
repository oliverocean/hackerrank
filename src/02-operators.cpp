#include <iostream>
#include <cmath>

// function to calculate and print total cost of a meal
void solve(double mealCost, int tipPercent, int taxPercent) {

    double theTip = mealCost * (tipPercent / 100.00);
    double theTax = mealCost * (taxPercent / 100.00);

    std::cout << "\nCost: $" << mealCost << "\n";
    std::cout << "Tax:  $" << theTip << "\n";
    std::cout << "Tip:  $" << theTax << "\n";
    std::cout << ">> Total Cost (rounded up) = $" << round(mealCost + theTip + theTax) << "\n";
}

int main()
{
    double mealCost{};
    int tipPercent{};
    int taxPercent{};

    std::cout << "Enter the meal cost as a double: \n";
    std::cin >> mealCost;

    std::cout << "Enter the tip percent as an integer: \n";
    std::cin >> tipPercent;

    std::cout << "Enter the tax percent as an integer: \n";
    std::cin >> taxPercent;

    solve(mealCost, tipPercent, taxPercent);

    return 0;
}