//incure the driver
#include<stdio.h>
int main()
{
    char sex,ms;
    int age;

    printf("Enter the age,sex and married status of the driver respectively\n");
    scanf("%d,%c,%c",&age,&sex,&ms);

    if( ms =='M')
    printf("driver should be incured");
    else 
    {
        if(sex =='M')
        { 
            if(age>30)
            printf("the driver should be incured\n");

            else
            printf("the driver should not be incured\n");
        }
        else
        {
            if(age>25)
            printf("driver should be incured \n");
            else
            printf("the driver should not be incured\n");
            
        }
    }
}