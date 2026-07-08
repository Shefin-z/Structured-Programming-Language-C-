#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int isSymmetric = 1; // Assume it's symmetric by default

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // If a mismatch is found, it's not symmetric
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }

    return 0;
}

