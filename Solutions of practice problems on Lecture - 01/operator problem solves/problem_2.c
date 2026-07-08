#include <stdio.h>

#define PI 3.1416

int main() {
    double r;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    double circumference = 2 * PI * r;

    printf("Circumference: %lf\n", circumference);

    return 0;
}

