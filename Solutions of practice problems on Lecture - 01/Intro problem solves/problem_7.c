#include <stdio.h>

int main() {
    int integerVariable;
    float floatVariable;
    char charVariable;

    // Prompt the user for input
    printf("Please enter an integer: ");
    scanf("%d", &integerVariable);

    printf("Please enter a floating-point number: ");
    scanf("%f", &floatVariable);

    // Clear the newline character left in the input buffer
    while (getchar() != '\n');

    printf("Please enter a character: ");
    scanf("%c", &charVariable);

    // Print the entered values
    printf("Entered Integer: %d\n", integerVariable);
    printf("Entered Float: %f\n", floatVariable);
    printf("Entered Character: %c\n", charVariable);

    return 0;
}

