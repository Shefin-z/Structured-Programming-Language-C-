#include <stdio.h>

int main() {
    // a) Declare a variable uninitialized
    int uninitializedVariable;

    // b) Declare and initialize a variable in one statement
    int initializedVariable = 10;

    // c) Declare and initialize multiple variables with different values in one statement
    int var1 = 20, var2 = 30, var3 = 40;

    // d) Declare and initialize multiple variables with the same value in one statement
    int sameValueVar1 = 50, sameValueVar2 = 50, sameValueVar3 = 50;

    // Printing the values
    printf("a) Uninitialized Variable: %d\n", uninitializedVariable);
    printf("b) Initialized Variable: %d\n", initializedVariable);
    printf("c) Multiple Variables with Different Values: %d, %d, %d\n", var1, var2, var3);
    printf("d) Multiple Variables with the Same Value: %d, %d, %d\n", sameValueVar1, sameValueVar1, sameValueVar1);

    return 0;
}

