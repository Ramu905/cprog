#include<stdio.h> 
int main()
{
    int a = 10,b = 5, c = 2;
    int d;
    d = a + b * c;
    printf("a+b*c is %d\n", d);
    d = a / b + c - (a * b);
    printf("a/b+c-(a*b) is %d\n", d);
    return 0;

}