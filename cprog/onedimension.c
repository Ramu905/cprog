// the program loads an integer array with numbers 0 to 99
#include<stdio.h>
int main(void)
{
    int x[100];     // this declares a 100 integer array
    int t;
    for(t = 0; t < 100; ++t)     // loads value with x  0 to 99
    x[t] = t;
    for(t = 0; t < 100; ++t)
    printf("%d",x[t]);
    return 0;

}