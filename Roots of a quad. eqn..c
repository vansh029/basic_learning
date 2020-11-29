// PROGRAM WILL HELP TO FIND THE ROOTS OF QUADRATIC EQUATION
// D=(b*b)-(4*a*c)
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;

    printf("enter the value of the cofficient of x^2 \n");
    scanf("%d",&a);
    printf("enter the value of the cofficient of x \n");
    scanf("%d",&b);
    printf("enter the value of the constant \n");
    scanf("%d",&c);

    D=(b*b)-(4*a*c);

    if(D<0)
    {
        printf("the quadratic equation doesn't has a real root");
    }

    if(D==0)
    {
        printf("the equation has real and equal roots \n");
        x=-b/(2.0*a);
        printf("the roots are the following\n%f,%f", x,x);
    }

    if(D>0)
    {
        printf("the roots of the equation are real and distinct");
        x=((-b)-sqrt(D))/(2*a);
        y=((-b)+sqrt(D))/(2*a);
        printf("the roots are the following\n%f,%f", x,y);
    }
    
    
return 0;
}