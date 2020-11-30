//PROGRAM HELPS TO FIND WHETHER A NUMBER IS DIVISIBLE BY 2 AND 3 OR NOT
#include<stdio.h>

int main()
{
    int a;
    printf("enter the number you wants to check\n");
    scanf("%d",&a);

    if(a % 2==0 && a % 3==0)
    {
        printf("%d entered number is divisible by both 2 and 3",a);
    }
    else
    {
        printf("%d the entered valuse is not divisible by 2 and 3",a);
    }
    
    

return 0;
}