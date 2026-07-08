#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter an odd integer: ");
    scanf("%d", &n);

    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i >= mid)
            {
                if (i == mid || j == mid)
                {
                    printf("$");
                }
                else if (abs(i - j) == mid || i + j == n - 1 + mid)
                {
                    printf("$");
                }
                else
                {
                    printf("_");
                }
            }
            else
            {
                if (i == mid || j == mid)
                {
                    printf("$");
                }
                else if (abs(i - j) == mid || i + j == mid)
                {
                    printf("$");
                }
                else
                {
                        printf("_");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
