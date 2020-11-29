// program to convet Celvin to Farenhiet and Kelvin
#include<stdio.h>
int main()
{
    float C ;
    printf("enter the value of temperature into celcius\n");
    scanf("%f",&C);
    float kelvin = C+273.15 ;
    float farenhiet = (C*9/5) + 32;
    printf("the converted value of temperature from celius to kelvin is \n%f \n",kelvin);
    printf("the converted value of temperature from celius to farenhier is \n%f",farenhiet);
return 0;
}