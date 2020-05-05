#include <stdio.h>
//#include <cmath>

void update(int *a,int *b) {
    //int a_temp = *a;
    //int b_temp = *b;
    //*a = *a + *b; // set a to sum of a+b
    //*b = std::fabs(a_temp - b_temp); // set b to absolute difference

    // alternative method using ternary operator instead of cmath and abs()
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}