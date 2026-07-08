#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n ||  j == n - i + 1) {
                printf("Z");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
