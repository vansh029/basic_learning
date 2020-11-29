//PROGRAM TELLS THE BIGGEST VALUE COMPARED TO THE THREE NUMBERS
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("ENTER THE VALUE OF THE NUM1\n");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF THE NUM2\n");
    scanf("%f",&b);
    printf("ENTER THE VALUE OF THE NUM3\n");
    scanf("%f",&c);
    if(a>b && a>c)
    {
        printf("THE LARGEST OF ALL IS NUM1=%f",a);
    }
    else
    {
        if (b>a && b>c)
        {
            printf("THE LARGEST OF ALL IS NUM2=%f",b);
        }
        else
        {
            printf("THE LARGEST OF ALL IS NUM3=%f",c);
        }
        
    }
    
return 0;
}