#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer (n): ");
    scanf("%d", &n);

    // Check if n is odd
    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 1;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        int stars, spaces;

        if (i <= mid) {
            stars = i * 2 + 1;
            spaces = mid - i;
        } else {
            stars = (n - i) * 2 - 1;
            spaces = i - mid;
        }

        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            printf("_");
        }

        // Print stars
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
