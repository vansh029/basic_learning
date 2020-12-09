//helps to find the income tax of the being
#include<stdio.h>
int main()
{
    float tax,income;
    printf("enter the income \n");
    scanf("%f",&income);

    if(income<=250000)
    {
        printf("acoording to the entered income tax is 0 rupees");
    }
    else if( (income>250000) &&(income<=500000))
    {
        tax=0.05*(income-250000);
        printf("acoording to the entered income tax is %f rupees",tax);
    }
    else if( (income<=1000000) && (income>500000))
    {
        tax=0.20*(income-500000);
        printf("acoording to the entered income tax is %f rupees",tax);
    }
    else if(income>1000000)
    {
         tax=0.30*(income-1000000);
        printf("acoording to the entered income tax is %f rupees",tax);
    }

return 0;
}