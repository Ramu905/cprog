#include<stdio.h>
extern int a = 50;
int b = 10;
int main()
{
auto int c = 40;
extern int b;
printf("the value of auto variable :%d\n",c);
printf("the value of external variables a and b :%d %d\n",a,b);
a = 5;
printf("the value of modified extern variable a :%d\n",a);
return 0;
}
