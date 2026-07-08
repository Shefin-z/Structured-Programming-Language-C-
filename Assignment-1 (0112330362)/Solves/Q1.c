#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1,a=1;i<=n;i++,a+=2)
    {
        if(i%2==1)
        {
            sum+=a;
        }
        else
        {
            sum-=a;
        }
    }
    printf("sum of first %d th terms is %d",n,sum);
    return 0;
}
