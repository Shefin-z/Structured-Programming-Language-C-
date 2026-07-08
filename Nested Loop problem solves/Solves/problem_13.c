#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print underscores
        for (int j = 1; j < 2*(n - i); j++) {
            printf("_");
        }

        // Print decreasing numbers
        if (i == n)
        {
            for (int j = i - 1; j >= 1; j--) {
                printf("%d", j);
            }
        }
        else
        {
            for (int j = i; j >= 1; j--) {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}
