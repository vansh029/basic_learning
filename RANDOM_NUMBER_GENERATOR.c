// PROGRAM HELPS TOO FIND A RANDOM NUMBER BETWEERN 1 TOO 100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
srand(time(0));
number=rand()%100 +1;
printf("THE number generated is %d",number );

return 0;
}