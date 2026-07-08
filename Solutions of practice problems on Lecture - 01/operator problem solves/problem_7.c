#include <stdio.h>

int main() {
    int intNum;
    float floatNum;

    intNum = 42;
    floatNum = 3.14;

    printf("Integer to Floating (Assignment): %f, Floating to Integer (Assignment): %d\n", (float)intNum, intNum);

    floatNum = (float)intNum;
    intNum = floatNum;

    printf("Integer to Floating (Type Casting): %f, Floating to Integer (Type Casting): %d\n", floatNum, intNum);

    return 0;
}

