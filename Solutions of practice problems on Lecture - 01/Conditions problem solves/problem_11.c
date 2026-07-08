#include <stdio.h>

int main() {
    double finalScore;

    printf("Enter the final score: ");
    scanf("%lf", &finalScore);

    if (finalScore >= 90) {
        printf("Grade: A\n");
    } else if (finalScore >= 80) {
        printf("Grade: B\n");
    } else if (finalScore >= 70) {
        printf("Grade: C\n");
    } else if (finalScore >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

