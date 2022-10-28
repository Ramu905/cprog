#include<stdio.h>
int main()
{
    int a = 5, b = 3;
    int incr;
    incr = (a < b) && (b++);  // if any condition in && is false then remaining cond not evaluated
    printf("%d\n", incr );     // it prints flase = 0 and b = 3 instead of 4
    printf("%d",b);
    return 0;
}