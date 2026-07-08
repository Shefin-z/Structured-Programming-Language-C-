#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf("_");
        }

        // Print the numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
