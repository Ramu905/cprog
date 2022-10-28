// c program to demonstrate logical operators
#include<stdio.h>
int main()
{
    int a = 10, b = 4, c = 10, d = 20;
    // logical AND operator
    if(a > b && c == d)
    printf("a is greater than b AND c is equal to d\n");
    else
    printf("AND condition is not satisfied\n");
    // logical OR operator example 
    if(a > b || c == d)
    printf("a is greater than b OR c is equal to d\n");
    else 
    printf("neither a is greater than b nor c is equal to d\n");
    // logical NOT operator example
    if(!(a == c))
    printf("a is equal to c\n");
    else 
    printf("a is not equal to c");
    return 0;

}