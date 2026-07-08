#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    int resultA = (a + b) <= 80;
    int resultB = !(a + c);
    int resultC = a != 0;

    printf("(a) Result: %d\n(b) Result: %d\n(c) Result: %d\n", resultA, resultB, resultC);

    return 0;
}

