#include<stdio.h>
int fun()
{
static int count = 0;   //static variable remains in memory 
count++;                 //we can call num of times
return count;
}
int main()
{
printf("%d", fun());
printf("%d", fun());
return 0;
}
