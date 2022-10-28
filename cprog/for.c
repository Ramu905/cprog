#include<stdio.h>
int main(void)
{
    // for(initialization; condition; increment);
    // statement;
int x, z;
for(x = 100; x != 65; x -= 5);  // it will execute until x equal to 65
z =x*x;                          // x is initialize to 100 and 5 is subtracted from it 
printf("the square of %d,%d",x,z);   // This printf() prints the sqr of 65
return 0;
}