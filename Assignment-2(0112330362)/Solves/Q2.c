#include<stdio.h>
int main()
{
    int n,num1=1,num2=1,nextnum;
    scanf("%d",&n);
    int ar[n];
    printf("First 10 Fibonacci numbers:");
    for(int i=0;i<n;i++)
    {
        ar[i]=num1;
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;
        printf(" %d",ar[i]);
    }
    printf("\n");
    printf("Odd Fibonacci numbers (1st, 3rd, 5th, 7th and 9th):");
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf(" %d",ar[i]);
        }
    }
    printf("\n");
    printf("Even numbers (2nd, 4th, 6th, 8th and 10th):");
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf(" %d",ar[i]);
        }
    }
    return 0;
}
