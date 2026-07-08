#include <stdio.h>

int main() {
    double X, Y;

    printf("Enter two numbers X and Y: ");
    scanf("%lf %lf", &X, &Y);

    if (X > Y) {
        printf("X is greater than Y.\n");
    } else if (X < Y) {
        printf("X is less than Y.\n");
    } else {
        printf("X is equal to Y.\n");
    }

    return 0;
}

