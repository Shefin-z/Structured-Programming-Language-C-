#include<stdio.h>
//1 -> One
//2 -> Two
int main()
{
    int x;
    scanf("%d",&x);

    /*if(x == 0)
    {
        printf("zero\n");
    }
    else if(x == 1)
    {
        printf("One");
    }
    else if(x == 2)
    {
        printf("Two");
    }
    else if(x == 3)
    {
        printf("Three");
    }
    else if(x == 4)
    {
        printf("Four");
    }
    else{
        printf("Five");
    }*/
    switch(x)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default:
        printf("Invalid input \n");
        break;
    }
    printf("Outside switch\n");
}
