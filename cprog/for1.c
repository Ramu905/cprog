#include<stdio.h>
int main(void)
{
    int x, y;
    x = 10;
    for(y= 10; y != x; ++y);
    printf("%d",y);
    return 0;
}