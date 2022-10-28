#include<stdio.h>
int main()
{
    int a = 5; 
    if(a == 5)  // if this condition is true then it prints the value 5
                // And it increments a value by 1 if the condition is false it prints a value//
    {
        printf("a is 5");
        a++;
    }
    printf(" %d", a );
}