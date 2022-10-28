// Magic number program 
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = 10;
    printf("Guess the magic number:");
    scanf("%d", &guess);
    if(guess == magic)
    {
        printf("That is right");
        printf("%d is the magic number ", magic);
    }
    else if(guess > magic)
    printf("That is wrong , too high ");
    else if(guess < magic)
    printf("that is wrong , too low");
    return 0;

}