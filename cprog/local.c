#include<stdio.h>
int main()
{
int var = 4;
{
int var = 35;
printf("%d\n", var);
}
printf("%d", var);
return 0;
}

