//PROGRAM TELLS US WHETHER THE NUMBER IS POS. NEG. OR ZERO
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the number you wants to check \n");
    scanf("%f",&a);

    if (a>0)
    {
        printf("the entered number is a positive number");
    }
    else
    {
        if (a<0)
        {
            printf("the entered value is Negative number");
        }
        else
        {
            printf("the entered number is zero");
        }
        
        
    }
    
return 0;
}