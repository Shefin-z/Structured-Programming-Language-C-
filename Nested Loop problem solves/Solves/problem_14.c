#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // If it's an odd row, print asterisks
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
        } else {
            // If it's an even row, print an asterisk, underscores, and another asterisk
            printf("*");
            for (int j = 2; j < n; j++) {
                printf("_");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

