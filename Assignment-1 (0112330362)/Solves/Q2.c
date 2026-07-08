#include<stdio.h>
int main()
{
    int studentID;
    printf("student ID:");
    scanf("%d",&studentID);

    int b=(studentID%100)%21+5;
    printf("b:%d\n",b);

    int A[10];
    printf("array A:\n");
    for(int i=0;i<10;i++)
    {
        A[i]=(studentID%10000)%7+3*i;
        printf("%d\n",A[i]);
    }

    int sumeven=0;
    for(int i=0;i<10;i++)
    {
        sumeven+=A[i];
    }
    printf("Sum of numbers in even-numbered indices: %d\n",sumeven);
    return 0;

}
