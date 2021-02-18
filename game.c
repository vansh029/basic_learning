// PROGRAM HELPS TOO FIND A RANDOM NUMBER BETWEERN 1 TOO 100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,nguesses=1,guess;
srand(time(0));
number=rand()%100 +1;
//printf("THE number generated is %d",number );
do{
    printf("Guess a number between 1 to 100 \n " );
    scanf("%d",&guess);
    
    if (number>guess)
    {
        printf("Plz enter a larger number \n");
    }
    else if (number<guess)
    {
        printf("Plz enter a smaller number \n");
    }
    else 
    {
        printf("The number of guesses are %d \n",nguesses);
    }
        nguesses++;
} while (number!=guess);

return 0;
}