#include<stdio.h>
int main()
{
    float basicSalary;
    printf("enter basic salary:");
    scanf("%f",&basicSalary);

    float houseRent;
    if(basicSalary<=40000)
    {
        houseRent=basicSalary*0.25;
    }
    else if(basicSalary<=80000)
    {
        houseRent=basicSalary*0.3;
    }
    else
    {
        houseRent=basicSalary*0.4;
    }

    float medicalallowance;
    if(basicSalary<=60000)
    {
        medicalallowance=basicSalary*0.5;
    }
    else
    {
        medicalallowance=basicSalary*0.7;
    }

    float providentfund;
    if(basicSalary<=40000)
    {
        providentfund=2000;
    }
    else if(basicSalary<=100000)
    {
        providentfund=4000;
    }
    else
    {
        providentfund=5000;
    }
    float incometax=1500;
    float totalsalary = basicSalary + houseRent + medicalallowance -providentfund-incometax;
    printf("total salary:%f\n",totalsalary);
    return 0;
}
