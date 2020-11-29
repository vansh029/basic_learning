//program tells us about the vowels or consonents
#include<stdio.h>
int main()
{
    char letter;
    printf("enter the letter you want to check for consonent or vowel\n");
    scanf("%c",&letter);

    switch (letter)
    {
    case'a':
        printf("the entered letter %c is a vovel",letter);
        break;
    case'A':
        printf("the entered letter %c is a vovel",letter);
        break;   
    case'e':
        printf("the entered letter %c is a vovel",letter);
        break;    
    case'E':
        printf("the entered letter %c is a vovel",letter);
        break;    
    case'i':
        printf("the entered letter %c is a vovel",letter);
        break;    
    case'I':
        printf("the entered letter %c is a vovel",letter);
        break;
    case'o':
        printf("the entered letter %c is a vovel",letter);
        break;
    case'O':
        printf("the entered letter %c is a vovel",letter);
        break;
    case'u':
        printf("the entered letter %c is a vovel",letter);
        break;
    case'U':
        printf("the entered letter %c is a vovel",letter);
        break;

    default:
        printf("THE ENTERED LETTER %c IS A CONCONENT",letter);
        break; 
    }
return 0;
}