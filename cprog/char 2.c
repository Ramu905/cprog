#include<stdio.h>
int main()
{
    char a = 10, b = 5, c = 40;
    char d = (a*b) + c^b;
    printf("%d", d);
    return 0;
}