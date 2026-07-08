#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n / 2 || j == 0 || j == n-1) {
                printf("H ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
