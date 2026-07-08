#include <stdio.h>

int main() {
    int firstNumber, lastNumber;
    int middleNumber; // This variable is declared but not used

    // Prompt the user for input
    printf("Please enter three integer numbers: ");

    // Read the first and last numbers, but skip the middle one
    scanf("%d %*d %d", &firstNumber, &lastNumber);

    // Print the assigned values
    printf("First Number: %d\n", firstNumber);
    printf("Last Number: %d\n", lastNumber);

    return 0;
}

