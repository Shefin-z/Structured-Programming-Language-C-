#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    /*if(-----)
    {
        printf("Even\n");
    }
    else if(-------)
    {
        printf("Odd\n");
    }
    else if(-----)
    {
    }
    else
    {
    }*/
    int check = x % 2;

    switch(check)
    {
    case 0:
        printf("Even\n");
        break;
    case 1:
        printf("Odd\n");
        break;
    }
    return 0;
}
