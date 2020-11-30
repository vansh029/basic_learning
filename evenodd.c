//PROGRAM HELPS TO FIND WHETHER THE NUMBER ENTERED ID EVEN OR ODD
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number you wants to check further\n");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("the number entered is even");
    }
    else
    {
        printf("the number entered is odd");
    }
    
    
return 0;
}