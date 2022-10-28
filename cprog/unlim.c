#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("guess the magic number: ");
    scanf("%d",&guess);
    if(guess == magic)
    {
        printf("** Right **");
        printf("%d is the magic number", magic);
    }
    else if(guess>magic)
    printf("Wrong , too high ");
   else printf("Wrong , too low ");
   return 0; 
}