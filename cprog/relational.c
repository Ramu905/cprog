// c program to demonstrates working of relational operators
#include<stdio.h>
int main()
{
    int a = 10, b =4;
    //greater than example
    if(a > b)
    printf("a is greater than b\n");
    else
    printf("a is less than or equal to b\n");
    // greater than or equal to 
    if(a >= b)
    printf("a is greater than or equal to b\n");
    else
    printf("a is lesser than b\n");
    // less than example
    if(a < b)
    printf("a is less than b\n");
    else 
    printf("a is greater than or equal to b\n");
    // less than or equal to 
    if(a <= b)
    printf("a is less than or equal to b\n");
    else
    printf("a is greater than b\n");
    return 0;
}