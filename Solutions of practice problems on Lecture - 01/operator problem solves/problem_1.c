#include <stdio.h>

int main() {
    double X, Y;

    // Prompt the user for input
    printf("Enter two numbers X and Y: ");
    scanf("%lf %lf", &X, &Y);

    // Calculate and print the results
    printf("Addition: %lf\n", X + Y);
    printf("Subtraction: %lf\n", X - Y);
    printf("Multiplication: %lf\n", X * Y);

    if (Y != 0) {
        printf("Division - Quotient: %lf, Reminder: %lf\n", X / Y, fmod(X, Y));
    } else {
        printf("Division by zero is undefined.\n");
    }

    return 0;
}
