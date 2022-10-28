// Program to print all odd numbers from 0 to 1 using continue statement
#include<stdio.h>
int main()
{
    int i, n = 2;
    for(i = 1; i <= 20; i++)
    {
        if(i == n)
        {
            n = n+2;       // Here n values is changes every time n=n+2 it n =2+2 =4 then it compare with if statement
            continue;     // process will contine until increment value is less than equal to 20
        }                  // it prints all odd values 
        printf("%d", i);   // if condition is not satiesfied then it prints simply i value 
    }
    return 0;
}