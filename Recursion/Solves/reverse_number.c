#include <stdio.h>

int sum=0,rem;

int reverse_number(int x)
{
    if(x == 0)
    {
        return sum;
    }
    else
    {
        rem=x%10;
        sum=sum*10+rem;
        reverse_number(x/10);
    }
    return sum;
}

int main()
{
    int num,rev;

    printf("Enter any number: ");
    scanf("%d",&num);

    rev=reverse_number(num);
    printf("The reverse of entered number is: %d",rev);
    return 0;
}
