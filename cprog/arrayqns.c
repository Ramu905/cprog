// Program to print the reverse order of an array
#include<stdio.h>
int main()
{
int a[9] = {34, 56, 54, 60, 8, 9, 32, 26, 39 };
int i;
for(i = 0; i < 9; i++)      // This prints original value 
{
    printf("%d", a[i]);
}
printf("\n");
for(i = 8; i >= 0; i--)    // This prints the revers order
{
printf("%d", a[i]);
}
return 0;
}