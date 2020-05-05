#include <iostream>
#include <vector>

//int max_of_four(int, int, int, int);
int max_of_four(int, int, int, int);


int main() {

    std::cout << "max: " << max_of_four(31, 45, 86, 94) << "\n";

    return 0;
}

int max_of_four(int a, int b, int c, int d) {

    if (a >= b && a >= c && a >= d) {
        return a;
    } else if (b >= a && b >= c && b >= d) {
        return b;
    } else if (c >= a && c >= b && c >= d) {
        return c;
    } else if (d >= a && d >= b && d >= c) {
        return d;
    } else {
        // error
    }
    return 0;
}