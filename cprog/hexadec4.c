 // Error while using invalid digit with hexadecimal 

#include<stdio.h>
int main()
{
int a = 0x10A;
int b = 0x129AG;    // hexadecimal num are 1 to F only 
printf("a in hexadecimal : %X, and in decimal: %d\n",a,a);
printf("b in hexadecimal : %X, and in decimal: %d\n",b,b);
return 0;
}
