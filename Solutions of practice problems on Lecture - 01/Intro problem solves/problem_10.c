#include <stdio.h>

int main() {
    long int longIntVariable = 1234567890L;         // A long int variable
    long long int longLongIntVariable = 1234567890123456789LL; // A long long int variable
    long double longDoubleVariable = 3.141592653589793238L;  // A long double variable
    short int shortIntVariable = 32767;              // A short int variable

    // Printing the values
    printf("Long Int Value: %ld\n", longIntVariable);
    printf("Long Long Int Value: %lld\n", longLongIntVariable);
    printf("Long Double Value: %Lf\n", longDoubleVariable);
    printf("Short Int Value: %d\n", shortIntVariable);

    return 0;
}

