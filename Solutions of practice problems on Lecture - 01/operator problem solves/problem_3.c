#include <stdio.h>

//X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)

int main() {
    int a, b;

    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    double result = (3.31 * a * a + 2.01 * b * b * b) / (7.16 * b * b + 2.01 * a * a * a);

    printf("Result: %lf\n", result);

    return 0;
}

