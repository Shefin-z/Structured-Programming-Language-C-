#include<stdio.h>

int factorial(int n){
    if(n == 5)
    {
        return n;
    }//base case
    else
    {
        return n + factorial(n+1);
    }
}

int main()
{
    int x = factorial(1);
    printf("%d\n",x);
    return 0;
}
