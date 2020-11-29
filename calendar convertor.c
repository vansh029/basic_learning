#include<stdio.h>
int main()
{
    int day,ndays,year,month;
    printf("enter the value of days you want to convert in years\n");
    scanf("%d",&ndays);
    year=ndays/365;
    month= (ndays-year*365)/30;
    day=ndays-(year*365)-(month*30);
    printf("year:%d\n",year);    
    printf("month:%d\n",month);   
    printf("day:%d",day);

return 0;
}