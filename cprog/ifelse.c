//magic number program
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int magic;   // magic number 
    int guess;   // user's guess
    magic = rand();  // generate the magic number (rand num is from 0 t0 32,767 or larger)
    printf("Guess the magic number:");
    scanf("%d",&guess);
    if(guess == magic)
    printf("** Right **");
    else 
    printf("wrong");
    return 0;
}