#include<stdio.h>
int main()
{
   int a = 10;
   int b = 50;
   int c;
   c = a + b;
   printf("%d\n", a+b);
   int d = 50;
   if(c > d)
   {
      printf("the value of c is greater than d\n");
   }
   else{
      printf("the vlaue is less than c\n");
   }
   c = a*b+(a + b);
   printf("%d", c);
   return 0;
}