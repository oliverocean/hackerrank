#include <iostream>
#include <cstdio>

int main() {

    // test input:  3 12345678912345 a 334.230011 14049.304930

    int myInt{};
    long myLong{};
    char myChar{};
    float myFloat{};
    double myDouble{};

    scanf("%d %ld %c %f %lf", &myInt, &myLong, &myChar, &myFloat, &myDouble);

    printf("%d \n", myInt);
    printf("%ld \n", myLong);
    printf("%c \n", myChar);
    printf("%f \n", myFloat);
    printf("%lf \n", myDouble);

    return 0;
}