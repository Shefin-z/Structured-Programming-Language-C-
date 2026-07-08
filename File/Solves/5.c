#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "w+");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a number\n");
    int value,value2;
    scanf("%d ", &value);
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);
    printf("%s",buffer);
    scanf("%d",&value2);

    fprintf(file, "3 Imran\n");
    fprintf(file, "3 Nusrat\n");
    fprintf(file, "3 Farid\n");

    fclose(file);

    printf("Information has been successfully appended to the file.\n");

    return 0;
}

