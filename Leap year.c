//PROGRAM WILL HELP TO FIND THE LEAP YEAR OUT
//VANSH BANSAL
#include<stdio.h>
int main()
{
    int year;
    printf("ENTER The YEAR YOU WANTS TO FIND OUT THAT IS IT LEAP OR NOT\n");
    scanf("%d",&year);
    
    if( ( year%400==0 ) || ( year%4==0 && year%100!=0 ) )
    {
        printf("THE YEAR %d IS LEAP",year);
    }
    else
    {
        printf("THE YEAR %d IS NOT LEAP",year);
    }
    
return 0;
}