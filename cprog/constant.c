#include<stdio.h>
#define add(x, y) x+y      //first expansion then evaluation i.e (x+y)=7
int main()
{
    printf("result of expression is a*b+c:%d", 5 * add(4, 3));     //because 5*4+3 not 5*7
    return 0;
}