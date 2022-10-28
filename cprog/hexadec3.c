 //input a number in hexadecimal format we use %X or %x 

#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a in hexadecimal:");
scanf("%x",&a);
printf("a in hex: %X, and in decimal: %d\n",a,a);
return 0;
}
