#include <stdio.h>

int main() {
    double angle1, angle2, angle3;

    printf("Enter three angles of a triangle: ");
    scanf("%lf %lf %lf", &angle1, &angle2, &angle3);

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && angle1 + angle2 + angle3 == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}

