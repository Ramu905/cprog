#include<stdio.h>
int main()
    {
int a = 5, b = 3;
int incr;
incr = (a > b) && (b++);   // This condition is true then it prints 1
printf("%d\n", incr);      // the value of b is post incremented it becomes 4
printf("%d", b);
return 0;
    }