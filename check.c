//Check whether a given character is an alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char a;
    printf("enter the charecter you wants to check\n");
    scanf("%c",&a);

    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("th entered charecter %c is a letter",a);
    }
    else
    {
        if (a>='0' && a<='9')
        printf("the entered charecter %c is a number",a);
        else
        {
        printf("the entered charecter %c is a special symbol",a);
        }
    }
    
    
return 0;
}