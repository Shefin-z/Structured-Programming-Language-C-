#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[100];
    int number;
    char name[100];

    int value,value2;
    printf("Enter the value: \n");
    scanf("%d",&value);
    while (fgets(line, sizeof(line), file)) {
        printf("%s\n", line);
    }
    scanf("%d",&value2);
    printf("%d",value2);

    /*while (fscanf(file, "%d %s", &number, name) != EOF) {
        printf("%d %s\n", number, name);
    }*/

    fclose(file);

    return 0;
}

