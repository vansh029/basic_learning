//THIS PROGRAM SWAPS THE NUMBER WITHout THE HELP OF A THIRD VARIABLE
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a \n");
    scanf("%d",&a);
    printf("Enter value of b \n");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a after getting swap is\n%d\n",a);
    printf("the value of b after getting swap is\n%d\n",b);

return 0;
}