#include<stdio.h>
int main()
{
    float a =11.3, b = 4.2;
    float res;
    printf("the values of a and b is %f %f\n", a, b);      // in double to print output it uses %f specifir format
    res = a + b;
    printf("a+b is %f\n", res);
    res = a - b;
    printf("a-b is %f\n", res);
    res = a * b;
    printf("a*b is %f\n", res);
    res = a / b;
    printf("a/b is %f", res);
    //signal to operating system to everything is fine
    return 0;      
}