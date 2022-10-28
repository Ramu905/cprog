// Program to allow user to enter integer until he/she enter a negative num or zero
#include<stdio.h>
int main()
{
    int n;
    printf(" Enter a number\n");
    scanf("%d",&n);
    while(n != 0)
    {
        if(n < 0)
        break;
        printf(" Enter a number");
        scanf("%d", &n);
    }
}