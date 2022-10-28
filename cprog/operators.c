// working of binary arithmetic operators
#include<stdio.h>
int main()
{
int a = 10, b =4 ;
int res;
printf("a is %d and b is %d\n", a,b);   //Printing the a and b
res = a + b;
printf("a+b is %d\n",res);   // addition 
res = a - b;
printf("a-b is %d\n",res);   //subtraction
res = a * b;
printf("a*b is %d\n", res);  //multiplication
res = a / b;
printf("a/b is %d\n", res);   //division
res = a % b;
printf("a%b is %d\n", res);   //modulus
return 0;
}
