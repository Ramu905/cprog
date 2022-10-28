// magic number program using ? operator
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = 50;  // generates a magic number 
    printf("Enter the magic number :");
    scanf("%d", &guess);
    if(guess == magic)
    {
        printf("** Right **");
        printf(" %d is the magic number ", magic);
    }
    else 
    guess  > magic ? printf("High"): printf("too low");
    return 0;
    }


