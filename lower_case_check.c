// the program will tell wherther a letter is lower case or not
#include<stdio.h>   
int main()
{
    char ch;
    printf("enter the charecter\n");
    scanf("%c",&ch);
    // 97-122 = a-z ASII code of letter
    if ((ch<=122) && (ch>=97))
    {
        printf("the entered charecter is a lowercase alphabet");
    }
    else
    {
        printf("the entered charecter is not a lowercase alphabet");
    }
    
return 0;
}