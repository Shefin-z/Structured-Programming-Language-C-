#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter an expression (e.g., 2 + 3): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("Result: %lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

