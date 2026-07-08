#include<stdio.h>
int main()
{
    int n=5,p=1,r=5;

    for(int i=0;i<n;i++)
    {
        int temp=p;
        for(int j=0;j<n-i;j++)
        {
           printf(" %d",temp);
           temp+=r;
           r--;
        }
        printf("\n");
        p++;
        r=5;
    }
    return 0;
}
